/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_SOFTWAREINFORMATIONDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_SOFTWAREINFORMATIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 软件详情响应对象集合
                */
                class SoftwareInformationData : public AbstractModel
                {
                public:
                    SoftwareInformationData();
                    ~SoftwareInformationData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取软件名称
                     * @return Name 软件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置软件名称
                     * @param _name 软件名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取安装时间
                     * @return InstallDate 安装时间
                     * 
                     */
                    std::string GetInstallDate() const;

                    /**
                     * 设置安装时间
                     * @param _installDate 安装时间
                     * 
                     */
                    void SetInstallDate(const std::string& _installDate);

                    /**
                     * 判断参数 InstallDate 是否已赋值
                     * @return InstallDate 是否已赋值
                     * 
                     */
                    bool InstallDateHasBeenSet() const;

                    /**
                     * 获取软件列表id(只支持32位)
                     * @return SoftwareId 软件列表id(只支持32位)
                     * 
                     */
                    int64_t GetSoftwareId() const;

                    /**
                     * 设置软件列表id(只支持32位)
                     * @param _softwareId 软件列表id(只支持32位)
                     * 
                     */
                    void SetSoftwareId(const int64_t& _softwareId);

                    /**
                     * 判断参数 SoftwareId 是否已赋值
                     * @return SoftwareId 是否已赋值
                     * 
                     */
                    bool SoftwareIdHasBeenSet() const;

                    /**
                     * 获取唯一标识Mid
                     * @return Mid 唯一标识Mid
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置唯一标识Mid
                     * @param _mid 唯一标识Mid
                     * 
                     */
                    void SetMid(const std::string& _mid);

                    /**
                     * 判断参数 Mid 是否已赋值
                     * @return Mid 是否已赋值
                     * 
                     */
                    bool MidHasBeenSet() const;

                    /**
                     * 获取软件版本
                     * @return Version 软件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置软件版本
                     * @param _version 软件版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取公司名
                     * @return CorpName 公司名
                     * 
                     */
                    std::string GetCorpName() const;

                    /**
                     * 设置公司名
                     * @param _corpName 公司名
                     * 
                     */
                    void SetCorpName(const std::string& _corpName);

                    /**
                     * 判断参数 CorpName 是否已赋值
                     * @return CorpName 是否已赋值
                     * 
                     */
                    bool CorpNameHasBeenSet() const;

                    /**
                     * 获取列表Id(只支持32位)
                     * @return Id 列表Id(只支持32位)
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置列表Id(只支持32位)
                     * @param _id 列表Id(只支持32位)
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取盗版风险（0:未支持，1:风险，2:未发现，3:未开启）
                     * @return PiracyRisk 盗版风险（0:未支持，1:风险，2:未发现，3:未开启）
                     * 
                     */
                    int64_t GetPiracyRisk() const;

                    /**
                     * 设置盗版风险（0:未支持，1:风险，2:未发现，3:未开启）
                     * @param _piracyRisk 盗版风险（0:未支持，1:风险，2:未发现，3:未开启）
                     * 
                     */
                    void SetPiracyRisk(const int64_t& _piracyRisk);

                    /**
                     * 判断参数 PiracyRisk 是否已赋值
                     * @return PiracyRisk 是否已赋值
                     * 
                     */
                    bool PiracyRiskHasBeenSet() const;

                private:

                    /**
                     * 软件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 安装时间
                     */
                    std::string m_installDate;
                    bool m_installDateHasBeenSet;

                    /**
                     * 软件列表id(只支持32位)
                     */
                    int64_t m_softwareId;
                    bool m_softwareIdHasBeenSet;

                    /**
                     * 唯一标识Mid
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * 软件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 公司名
                     */
                    std::string m_corpName;
                    bool m_corpNameHasBeenSet;

                    /**
                     * 列表Id(只支持32位)
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 盗版风险（0:未支持，1:风险，2:未发现，3:未开启）
                     */
                    int64_t m_piracyRisk;
                    bool m_piracyRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_SOFTWAREINFORMATIONDATA_H_

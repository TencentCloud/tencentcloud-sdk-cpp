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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 部署记录信息
                */
                class UpdateRecordInfo : public AbstractModel
                {
                public:
                    UpdateRecordInfo();
                    ~UpdateRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录ID
                     * @return Id 记录ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录ID
                     * @param _id 记录ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取新证书ID
                     * @return CertId 新证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置新证书ID
                     * @param _certId 新证书ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取原证书ID
                     * @return OldCertId 原证书ID
                     * 
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 设置原证书ID
                     * @param _oldCertId 原证书ID
                     * 
                     */
                    void SetOldCertId(const std::string& _oldCertId);

                    /**
                     * 判断参数 OldCertId 是否已赋值
                     * @return OldCertId 是否已赋值
                     * 
                     */
                    bool OldCertIdHasBeenSet() const;

                    /**
                     * 获取部署资源类型列表
                     * @return ResourceTypes 部署资源类型列表
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置部署资源类型列表
                     * @param _resourceTypes 部署资源类型列表
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取部署地域列表
                     * @return Regions 部署地域列表
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置部署地域列表
                     * @param _regions 部署地域列表
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取部署状态
                     * @return Status 部署状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置部署状态
                     * @param _status 部署状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取部署时间
                     * @return CreateTime 部署时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署时间
                     * @param _createTime 部署时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后一次更新时间
                     * @return UpdateTime 最后一次更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后一次更新时间
                     * @param _updateTime 最后一次更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 记录ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 新证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 原证书ID
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                    /**
                     * 部署资源类型列表
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * 部署地域列表
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * 部署状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 部署时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后一次更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDINFO_H_

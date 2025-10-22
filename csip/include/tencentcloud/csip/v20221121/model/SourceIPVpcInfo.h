/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPVPCINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPVPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 调用源IP 外部账号信息
                */
                class SourceIPVpcInfo : public AbstractModel
                {
                public:
                    SourceIPVpcInfo();
                    ~SourceIPVpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号名称
                     * @return Name 账号名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号名称
                     * @param _name 账号名称
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
                     * 获取vpc所属appid
                     * @return AppID vpc所属appid
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置vpc所属appid
                     * @param _appID vpc所属appid
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcID vpc id
                     * 
                     */
                    std::string GetVpcID() const;

                    /**
                     * 设置vpc id
                     * @param _vpcID vpc id
                     * 
                     */
                    void SetVpcID(const std::string& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     * 
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取vpc 名称
                     * @return VpcName vpc 名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc 名称
                     * @param _vpcName vpc 名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                private:

                    /**
                     * 账号名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * vpc所属appid
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * vpc 名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPVPCINFO_H_

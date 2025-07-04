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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_SERVICEWAFSTATUS_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_SERVICEWAFSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务的 WAF 状态
                */
                class ServiceWafStatus : public AbstractModel
                {
                public:
                    ServiceWafStatus();
                    ~ServiceWafStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 服务的名字
                     * @return Name  服务的名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置 服务的名字
                     * @param _name  服务的名字
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
                     * 获取服务的 ID
                     * @return Id 服务的 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置服务的 ID
                     * @param _id 服务的 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取服务的类型
                     * @return Type 服务的类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置服务的类型
                     * @param _type 服务的类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取 服务是否开启 WAF 防护
                     * @return Status  服务是否开启 WAF 防护
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置 服务是否开启 WAF 防护
                     * @param _status  服务是否开启 WAF 防护
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     *  服务的名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务的 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务的类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     *  服务是否开启 WAF 防护
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SERVICEWAFSTATUS_H_

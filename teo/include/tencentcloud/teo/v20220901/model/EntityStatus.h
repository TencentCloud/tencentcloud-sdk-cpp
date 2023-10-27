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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ENTITYSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ENTITYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全实例状态。
                */
                class EntityStatus : public AbstractModel
                {
                public:
                    EntityStatus();
                    ~EntityStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名，现在只有子域名。
                     * @return Entity 实例名，现在只有子域名。
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置实例名，现在只有子域名。
                     * @param _entity 实例名，现在只有子域名。
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取实例配置下发状态，取值有：
<li>online：配置已生效；</li><li>fail：配置失败；</li><li> process：配置下发中。</li>
                     * @return Status 实例配置下发状态，取值有：
<li>online：配置已生效；</li><li>fail：配置失败；</li><li> process：配置下发中。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例配置下发状态，取值有：
<li>online：配置已生效；</li><li>fail：配置失败；</li><li> process：配置下发中。</li>
                     * @param _status 实例配置下发状态，取值有：
<li>online：配置已生效；</li><li>fail：配置失败；</li><li> process：配置下发中。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例配置下发信息提示。
                     * @return Message 实例配置下发信息提示。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置实例配置下发信息提示。
                     * @param _message 实例配置下发信息提示。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 实例名，现在只有子域名。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 实例配置下发状态，取值有：
<li>online：配置已生效；</li><li>fail：配置失败；</li><li> process：配置下发中。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例配置下发信息提示。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENTITYSTATUS_H_

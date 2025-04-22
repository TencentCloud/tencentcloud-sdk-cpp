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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupVersionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 配置组版本发布记录详情。
                */
                class DeployRecord : public AbstractModel
                {
                public:
                    DeployRecord();
                    ~DeployRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布版本的详细信息。
                     * @return ConfigGroupVersionInfos 发布版本的详细信息。
                     * 
                     */
                    std::vector<ConfigGroupVersionInfo> GetConfigGroupVersionInfos() const;

                    /**
                     * 设置发布版本的详细信息。
                     * @param _configGroupVersionInfos 发布版本的详细信息。
                     * 
                     */
                    void SetConfigGroupVersionInfos(const std::vector<ConfigGroupVersionInfo>& _configGroupVersionInfos);

                    /**
                     * 判断参数 ConfigGroupVersionInfos 是否已赋值
                     * @return ConfigGroupVersionInfos 是否已赋值
                     * 
                     */
                    bool ConfigGroupVersionInfosHasBeenSet() const;

                    /**
                     * 获取发布时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return DeployTime 发布时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置发布时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _deployTime 发布时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取发布状态，取值有：
<li> deploying ：发布中；</li>
<li>failure ：发布失败；</li>
<li>success： 发布成功。</li>
                     * @return Status 发布状态，取值有：
<li> deploying ：发布中；</li>
<li>failure ：发布失败；</li>
<li>success： 发布成功。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置发布状态，取值有：
<li> deploying ：发布中；</li>
<li>failure ：发布失败；</li>
<li>success： 发布成功。</li>
                     * @param _status 发布状态，取值有：
<li> deploying ：发布中；</li>
<li>failure ：发布失败；</li>
<li>success： 发布成功。</li>
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
                     * 获取发布结果信息。
                     * @return Message 发布结果信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置发布结果信息。
                     * @param _message 发布结果信息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取发布记录 ID。
                     * @return RecordId 发布记录 ID。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置发布记录 ID。
                     * @param _recordId 发布记录 ID。
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取变更说明。
                     * @return Description 变更说明。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置变更说明。
                     * @param _description 变更说明。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 发布版本的详细信息。
                     */
                    std::vector<ConfigGroupVersionInfo> m_configGroupVersionInfos;
                    bool m_configGroupVersionInfosHasBeenSet;

                    /**
                     * 发布时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * 发布状态，取值有：
<li> deploying ：发布中；</li>
<li>failure ：发布失败；</li>
<li>success： 发布成功。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发布结果信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 发布记录 ID。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 变更说明。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYRECORD_H_

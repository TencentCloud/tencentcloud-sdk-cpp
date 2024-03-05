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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLSTOPIC_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLSTOPIC_H_

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
                * 实时日志投递到腾讯云 CLS 的配置信息。
                */
                class CLSTopic : public AbstractModel
                {
                public:
                    CLSTopic();
                    ~CLSTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云 CLS 日志集 ID。	
                     * @return LogSetId 腾讯云 CLS 日志集 ID。	
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置腾讯云 CLS 日志集 ID。	
                     * @param _logSetId 腾讯云 CLS 日志集 ID。	
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取腾讯云 CLS 日志主题 ID。
                     * @return TopicId 腾讯云 CLS 日志主题 ID。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置腾讯云 CLS 日志主题 ID。
                     * @param _topicId 腾讯云 CLS 日志主题 ID。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取腾讯云 CLS 日志集所在的地域。
                     * @return LogSetRegion 腾讯云 CLS 日志集所在的地域。
                     * 
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置腾讯云 CLS 日志集所在的地域。
                     * @param _logSetRegion 腾讯云 CLS 日志集所在的地域。
                     * 
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     * 
                     */
                    bool LogSetRegionHasBeenSet() const;

                private:

                    /**
                     * 腾讯云 CLS 日志集 ID。	
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 腾讯云 CLS 日志主题 ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 腾讯云 CLS 日志集所在的地域。
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLSTOPIC_H_

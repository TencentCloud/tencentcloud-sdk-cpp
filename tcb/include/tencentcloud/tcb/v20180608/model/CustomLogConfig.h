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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMLOGCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 安全网关自定义日志配置
                */
                class CustomLogConfig : public AbstractModel
                {
                public:
                    CustomLogConfig();
                    ~CustomLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否需要请求体
                     * @return NeedReqBodyLog 是否需要请求体
                     * 
                     */
                    bool GetNeedReqBodyLog() const;

                    /**
                     * 设置是否需要请求体
                     * @param _needReqBodyLog 是否需要请求体
                     * 
                     */
                    void SetNeedReqBodyLog(const bool& _needReqBodyLog);

                    /**
                     * 判断参数 NeedReqBodyLog 是否已赋值
                     * @return NeedReqBodyLog 是否已赋值
                     * 
                     */
                    bool NeedReqBodyLogHasBeenSet() const;

                    /**
                     * 获取是否需要请求头
                     * @return NeedReqHeaderLog 是否需要请求头
                     * 
                     */
                    bool GetNeedReqHeaderLog() const;

                    /**
                     * 设置是否需要请求头
                     * @param _needReqHeaderLog 是否需要请求头
                     * 
                     */
                    void SetNeedReqHeaderLog(const bool& _needReqHeaderLog);

                    /**
                     * 判断参数 NeedReqHeaderLog 是否已赋值
                     * @return NeedReqHeaderLog 是否已赋值
                     * 
                     */
                    bool NeedReqHeaderLogHasBeenSet() const;

                    /**
                     * 获取是否需要回包体
                     * @return NeedRspBodyLog 是否需要回包体
                     * 
                     */
                    bool GetNeedRspBodyLog() const;

                    /**
                     * 设置是否需要回包体
                     * @param _needRspBodyLog 是否需要回包体
                     * 
                     */
                    void SetNeedRspBodyLog(const bool& _needRspBodyLog);

                    /**
                     * 判断参数 NeedRspBodyLog 是否已赋值
                     * @return NeedRspBodyLog 是否已赋值
                     * 
                     */
                    bool NeedRspBodyLogHasBeenSet() const;

                    /**
                     * 获取是否需要回包头部信息
                     * @return NeedRspHeaderLog 是否需要回包头部信息
                     * 
                     */
                    bool GetNeedRspHeaderLog() const;

                    /**
                     * 设置是否需要回包头部信息
                     * @param _needRspHeaderLog 是否需要回包头部信息
                     * 
                     */
                    void SetNeedRspHeaderLog(const bool& _needRspHeaderLog);

                    /**
                     * 判断参数 NeedRspHeaderLog 是否已赋值
                     * @return NeedRspHeaderLog 是否已赋值
                     * 
                     */
                    bool NeedRspHeaderLogHasBeenSet() const;

                    /**
                     * 获取cls set信息
                     * @return LogSetId cls set信息
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置cls set信息
                     * @param _logSetId cls set信息
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
                     * 获取cls topicId
                     * @return LogTopicId cls topicId
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置cls topicId
                     * @param _logTopicId cls topicId
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * 是否需要请求体
                     */
                    bool m_needReqBodyLog;
                    bool m_needReqBodyLogHasBeenSet;

                    /**
                     * 是否需要请求头
                     */
                    bool m_needReqHeaderLog;
                    bool m_needReqHeaderLogHasBeenSet;

                    /**
                     * 是否需要回包体
                     */
                    bool m_needRspBodyLog;
                    bool m_needRspBodyLogHasBeenSet;

                    /**
                     * 是否需要回包头部信息
                     */
                    bool m_needRspHeaderLog;
                    bool m_needRspHeaderLogHasBeenSet;

                    /**
                     * cls set信息
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * cls topicId
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMLOGCONFIG_H_

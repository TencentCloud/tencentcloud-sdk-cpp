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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_CLS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_CLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 腾讯云日志服务相关参数
                */
                class CLS : public AbstractModel
                {
                public:
                    CLS();
                    ~CLS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用
                     * @return Enable 是否启用
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用
                     * @param Enable 是否启用
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取日志集
                     * @return LogSet 日志集
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置日志集
                     * @param LogSet 日志集
                     */
                    void SetLogSet(const std::string& _logSet);

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取日志主题
                     * @return Topic 日志主题
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置日志主题
                     * @param Topic 日志主题
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取是否删除
                     * @return NeedDelete 是否删除
                     */
                    bool GetNeedDelete() const;

                    /**
                     * 设置是否删除
                     * @param NeedDelete 是否删除
                     */
                    void SetNeedDelete(const bool& _needDelete);

                    /**
                     * 判断参数 NeedDelete 是否已赋值
                     * @return NeedDelete 是否已赋值
                     */
                    bool NeedDeleteHasBeenSet() const;

                private:

                    /**
                     * 是否启用
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 日志集
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * 日志主题
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 是否删除
                     */
                    bool m_needDelete;
                    bool m_needDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_CLS_H_

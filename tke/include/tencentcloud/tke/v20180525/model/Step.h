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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_STEP_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_STEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 执行步骤信息
                */
                class Step : public AbstractModel
                {
                public:
                    Step();
                    ~Step() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取开始时间
                     * @return StartAt 开始时间
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置开始时间
                     * @param _startAt 开始时间
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndAt 结束时间
                     * 
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置结束时间
                     * @param _endAt 结束时间
                     * 
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     * 
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取当前状态
                     * @return Status 当前状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前状态
                     * @param _status 当前状态
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
                     * 获取执行信息
                     * @return Message 执行信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置执行信息
                     * @param _message 执行信息
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
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * 当前状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_STEP_H_

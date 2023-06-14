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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_DELETETEMPLATESTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_DELETETEMPLATESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * 删除模板响应
                */
                class DeleteTemplateStatus : public AbstractModel
                {
                public:
                    DeleteTemplateStatus();
                    ~DeleteTemplateStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除状态信息。
                     * @return DeleteStatus 删除状态信息。
                     * 
                     */
                    std::string GetDeleteStatus() const;

                    /**
                     * 设置删除状态信息。
                     * @param _deleteStatus 删除状态信息。
                     * 
                     */
                    void SetDeleteStatus(const std::string& _deleteStatus);

                    /**
                     * 判断参数 DeleteStatus 是否已赋值
                     * @return DeleteStatus 是否已赋值
                     * 
                     */
                    bool DeleteStatusHasBeenSet() const;

                    /**
                     * 获取删除时间，UNIX 时间戳（单位：秒）。
                     * @return DeleteTime 删除时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置删除时间，UNIX 时间戳（单位：秒）。
                     * @param _deleteTime 删除时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetDeleteTime(const uint64_t& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                private:

                    /**
                     * 删除状态信息。
                     */
                    std::string m_deleteStatus;
                    bool m_deleteStatusHasBeenSet;

                    /**
                     * 删除时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_DELETETEMPLATESTATUS_H_

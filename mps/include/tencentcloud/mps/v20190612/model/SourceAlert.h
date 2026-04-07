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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEALERT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEALERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装Location告警信息
                */
                class SourceAlert : public AbstractModel
                {
                public:
                    SourceAlert();
                    ~SourceAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source ID。
                     * @return SourceId Source ID。
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置Source ID。
                     * @param _sourceId Source ID。
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取Source名称。
                     * @return SourceName Source名称。
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Source名称。
                     * @param _sourceName Source名称。
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取告警事件码。
                     * @return Code 告警事件码。
                     * 
                     */
                    uint64_t GetCode() const;

                    /**
                     * 设置告警事件码。
                     * @param _code 告警事件码。
                     * 
                     */
                    void SetCode(const uint64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取告警分类。
                     * @return Category 告警分类。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置告警分类。
                     * @param _category 告警分类。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取告警消息。
                     * @return Message 告警消息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置告警消息。
                     * @param _message 告警消息。
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
                     * 获取更新时间。
                     * @return LastModifiedTime 更新时间。
                     * 
                     */
                    uint64_t GetLastModifiedTime() const;

                    /**
                     * 设置更新时间。
                     * @param _lastModifiedTime 更新时间。
                     * 
                     */
                    void SetLastModifiedTime(const uint64_t& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * Source ID。
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * Source名称。
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 告警事件码。
                     */
                    uint64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 告警分类。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 告警消息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    uint64_t m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SOURCEALERT_H_

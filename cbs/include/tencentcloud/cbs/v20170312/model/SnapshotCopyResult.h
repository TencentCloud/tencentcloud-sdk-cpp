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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTCOPYRESULT_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTCOPYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述快照跨地域复制的结果。
                */
                class SnapshotCopyResult : public AbstractModel
                {
                public:
                    SnapshotCopyResult();
                    ~SnapshotCopyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取复制到目标地域的新快照ID。
                     * @return SnapshotId 复制到目标地域的新快照ID。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置复制到目标地域的新快照ID。
                     * @param _snapshotId 复制到目标地域的新快照ID。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取指示具体错误信息，成功时为空字符串。
                     * @return Message 指示具体错误信息，成功时为空字符串。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置指示具体错误信息，成功时为空字符串。
                     * @param _message 指示具体错误信息，成功时为空字符串。
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
                     * 获取错误码，成功时取值为“Success”。
                     * @return Code 错误码，成功时取值为“Success”。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码，成功时取值为“Success”。
                     * @param _code 错误码，成功时取值为“Success”。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取跨地复制的目标地域。
                     * @return DestinationRegion 跨地复制的目标地域。
                     * 
                     */
                    std::string GetDestinationRegion() const;

                    /**
                     * 设置跨地复制的目标地域。
                     * @param _destinationRegion 跨地复制的目标地域。
                     * 
                     */
                    void SetDestinationRegion(const std::string& _destinationRegion);

                    /**
                     * 判断参数 DestinationRegion 是否已赋值
                     * @return DestinationRegion 是否已赋值
                     * 
                     */
                    bool DestinationRegionHasBeenSet() const;

                private:

                    /**
                     * 复制到目标地域的新快照ID。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 指示具体错误信息，成功时为空字符串。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 错误码，成功时取值为“Success”。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 跨地复制的目标地域。
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTCOPYRESULT_H_

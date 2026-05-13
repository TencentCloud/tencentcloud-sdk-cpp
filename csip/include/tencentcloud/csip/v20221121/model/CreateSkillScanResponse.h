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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateSkillScan返回参数结构体
                */
                class CreateSkillScanResponse : public AbstractModel
                {
                public:
                    CreateSkillScanResponse();
                    ~CreateSkillScanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件的 SHA256 Hash，用于轮询 DescribeSkillScanResult 接口
参数格式：sha256:<64位hex>
                     * @return ContentHash 文件的 SHA256 Hash，用于轮询 DescribeSkillScanResult 接口
参数格式：sha256:<64位hex>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取本次请求实际绑定的引擎版本号。调用方应保存并在后续 DescribeSkillScanResult 时显式传入
                     * @return EngineVersion 本次请求实际绑定的引擎版本号。调用方应保存并在后续 DescribeSkillScanResult 时显式传入
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取任务状态，固定为 SCANNING，表示任务已接收
                     * @return Status 任务状态，固定为 SCANNING，表示任务已接收
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取可读的操作结果描述
                     * @return Message 可读的操作结果描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 文件的 SHA256 Hash，用于轮询 DescribeSkillScanResult 接口
参数格式：sha256:<64位hex>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * 本次请求实际绑定的引擎版本号。调用方应保存并在后续 DescribeSkillScanResult 时显式传入
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 任务状态，固定为 SCANNING，表示任务已接收
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 可读的操作结果描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANRESPONSE_H_

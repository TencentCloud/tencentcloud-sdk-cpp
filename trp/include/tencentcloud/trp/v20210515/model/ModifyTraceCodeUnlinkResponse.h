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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACECODEUNLINKRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACECODEUNLINKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * ModifyTraceCodeUnlink返回参数结构体
                */
                class ModifyTraceCodeUnlinkResponse : public AbstractModel
                {
                public:
                    ModifyTraceCodeUnlinkResponse();
                    ~ModifyTraceCodeUnlinkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功解绑溯源码的数量
                     * @return UnlinkCnt 成功解绑溯源码的数量
                     * 
                     */
                    uint64_t GetUnlinkCnt() const;

                    /**
                     * 判断参数 UnlinkCnt 是否已赋值
                     * @return UnlinkCnt 是否已赋值
                     * 
                     */
                    bool UnlinkCntHasBeenSet() const;

                    /**
                     * 获取当前批次的码数量
                     * @return CodeCnt 当前批次的码数量
                     * 
                     */
                    uint64_t GetCodeCnt() const;

                    /**
                     * 判断参数 CodeCnt 是否已赋值
                     * @return CodeCnt 是否已赋值
                     * 
                     */
                    bool CodeCntHasBeenSet() const;

                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 成功解绑溯源码的数量
                     */
                    uint64_t m_unlinkCnt;
                    bool m_unlinkCntHasBeenSet;

                    /**
                     * 当前批次的码数量
                     */
                    uint64_t m_codeCnt;
                    bool m_codeCntHasBeenSet;

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACECODEUNLINKRESPONSE_H_

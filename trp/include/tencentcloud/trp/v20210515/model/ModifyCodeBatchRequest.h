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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCODEBATCHREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCODEBATCHREQUEST_H_

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
                * ModifyCodeBatch请求参数结构体
                */
                class ModifyCodeBatchRequest : public AbstractModel
                {
                public:
                    ModifyCodeBatchRequest();
                    ~ModifyCodeBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param BatchId 批次ID
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param CorpId 企业ID
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取状态 0: 未激活 1: 已激活 -1: 已冻结
                     * @return Status 状态 0: 未激活 1: 已激活 -1: 已冻结
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 0: 未激活 1: 已激活 -1: 已冻结
                     * @param Status 状态 0: 未激活 1: 已激活 -1: 已冻结
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return MpTpl 模板ID
                     */
                    std::string GetMpTpl() const;

                    /**
                     * 设置模板ID
                     * @param MpTpl 模板ID
                     */
                    void SetMpTpl(const std::string& _mpTpl);

                    /**
                     * 判断参数 MpTpl 是否已赋值
                     * @return MpTpl 是否已赋值
                     */
                    bool MpTplHasBeenSet() const;

                private:

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 状态 0: 未激活 1: 已激活 -1: 已冻结
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 模板ID
                     */
                    std::string m_mpTpl;
                    bool m_mpTplHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCODEBATCHREQUEST_H_

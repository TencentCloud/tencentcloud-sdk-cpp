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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_AIMODELINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_AIMODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * AI模型信息
                */
                class AIModelInfo : public AbstractModel
                {
                public:
                    AIModelInfo();
                    ~AIModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     * @return Status 申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     * @param _status 申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取可调用数量
                     * @return Total 可调用数量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置可调用数量
                     * @param _total 可调用数量
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取已调用数量
                     * @return Used 已调用数量
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置已调用数量
                     * @param _used 已调用数量
                     * 
                     */
                    void SetUsed(const uint64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取申请时间
                     * @return ApplyTime 申请时间
                     * 
                     */
                    uint64_t GetApplyTime() const;

                    /**
                     * 设置申请时间
                     * @param _applyTime 申请时间
                     * 
                     */
                    void SetApplyTime(const uint64_t& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取审批通过时间
                     * @return ApprovalTime 审批通过时间
                     * 
                     */
                    uint64_t GetApprovalTime() const;

                    /**
                     * 设置审批通过时间
                     * @param _approvalTime 审批通过时间
                     * 
                     */
                    void SetApprovalTime(const uint64_t& _approvalTime);

                    /**
                     * 判断参数 ApprovalTime 是否已赋值
                     * @return ApprovalTime 是否已赋值
                     * 
                     */
                    bool ApprovalTimeHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 可调用数量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已调用数量
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 申请时间
                     */
                    uint64_t m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 审批通过时间
                     */
                    uint64_t m_approvalTime;
                    bool m_approvalTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_AIMODELINFO_H_

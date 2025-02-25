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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBEUSERUSAGECNT_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBEUSERUSAGECNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 预付费 后付费 总数显示接口出参
                */
                class OutputDescribeUserUsageCnt : public AbstractModel
                {
                public:
                    OutputDescribeUserUsageCnt();
                    ~OutputDescribeUserUsageCnt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前付费模式，0 后付费 1 预付费
                     * @return PayMode 当前付费模式，0 后付费 1 预付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置当前付费模式，0 后付费 1 预付费
                     * @param _payMode 当前付费模式，0 后付费 1 预付费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取后付费本月使用量
                     * @return AfterPayModeThisMonthUsedCnt 后付费本月使用量
                     * 
                     */
                    int64_t GetAfterPayModeThisMonthUsedCnt() const;

                    /**
                     * 设置后付费本月使用量
                     * @param _afterPayModeThisMonthUsedCnt 后付费本月使用量
                     * 
                     */
                    void SetAfterPayModeThisMonthUsedCnt(const int64_t& _afterPayModeThisMonthUsedCnt);

                    /**
                     * 判断参数 AfterPayModeThisMonthUsedCnt 是否已赋值
                     * @return AfterPayModeThisMonthUsedCnt 是否已赋值
                     * 
                     */
                    bool AfterPayModeThisMonthUsedCntHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取超出时间
                     * @return ExpireTime 超出时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置超出时间
                     * @param _expireTime 超出时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取后付费上月使用量
                     * @return AfterPayModeLastMonthUsedCnt 后付费上月使用量
                     * 
                     */
                    int64_t GetAfterPayModeLastMonthUsedCnt() const;

                    /**
                     * 设置后付费上月使用量
                     * @param _afterPayModeLastMonthUsedCnt 后付费上月使用量
                     * 
                     */
                    void SetAfterPayModeLastMonthUsedCnt(const int64_t& _afterPayModeLastMonthUsedCnt);

                    /**
                     * 判断参数 AfterPayModeLastMonthUsedCnt 是否已赋值
                     * @return AfterPayModeLastMonthUsedCnt 是否已赋值
                     * 
                     */
                    bool AfterPayModeLastMonthUsedCntHasBeenSet() const;

                    /**
                     * 获取预付费总量
                     * @return BeforePayModeTotalUsedCnt 预付费总量
                     * 
                     */
                    int64_t GetBeforePayModeTotalUsedCnt() const;

                    /**
                     * 设置预付费总量
                     * @param _beforePayModeTotalUsedCnt 预付费总量
                     * 
                     */
                    void SetBeforePayModeTotalUsedCnt(const int64_t& _beforePayModeTotalUsedCnt);

                    /**
                     * 判断参数 BeforePayModeTotalUsedCnt 是否已赋值
                     * @return BeforePayModeTotalUsedCnt 是否已赋值
                     * 
                     */
                    bool BeforePayModeTotalUsedCntHasBeenSet() const;

                    /**
                     * 获取预付费剩余用量
                     * @return BeforePayModeRemainUsedCnt 预付费剩余用量
                     * 
                     */
                    int64_t GetBeforePayModeRemainUsedCnt() const;

                    /**
                     * 设置预付费剩余用量
                     * @param _beforePayModeRemainUsedCnt 预付费剩余用量
                     * 
                     */
                    void SetBeforePayModeRemainUsedCnt(const int64_t& _beforePayModeRemainUsedCnt);

                    /**
                     * 判断参数 BeforePayModeRemainUsedCnt 是否已赋值
                     * @return BeforePayModeRemainUsedCnt 是否已赋值
                     * 
                     */
                    bool BeforePayModeRemainUsedCntHasBeenSet() const;

                private:

                    /**
                     * 当前付费模式，0 后付费 1 预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 后付费本月使用量
                     */
                    int64_t m_afterPayModeThisMonthUsedCnt;
                    bool m_afterPayModeThisMonthUsedCntHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 超出时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 后付费上月使用量
                     */
                    int64_t m_afterPayModeLastMonthUsedCnt;
                    bool m_afterPayModeLastMonthUsedCntHasBeenSet;

                    /**
                     * 预付费总量
                     */
                    int64_t m_beforePayModeTotalUsedCnt;
                    bool m_beforePayModeTotalUsedCntHasBeenSet;

                    /**
                     * 预付费剩余用量
                     */
                    int64_t m_beforePayModeRemainUsedCnt;
                    bool m_beforePayModeRemainUsedCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBEUSERUSAGECNT_H_

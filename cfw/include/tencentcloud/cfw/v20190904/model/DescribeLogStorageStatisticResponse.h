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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/StorageHistogram.h>
#include <tencentcloud/cfw/v20190904/model/StorageHistogramShow.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeLogStorageStatistic返回参数结构体
                */
                class DescribeLogStorageStatisticResponse : public AbstractModel
                {
                public:
                    DescribeLogStorageStatisticResponse();
                    ~DescribeLogStorageStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回状态码 0 成功 非0不成功
                     * @return ReturnCode 返回状态码 0 成功 非0不成功
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取返回信息  success 成功 其他 不成功
                     * @return ReturnMsg 返回信息  success 成功 其他 不成功
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取已使用存储量，单位B
                     * @return UsedSize 已使用存储量，单位B
                     * 
                     */
                    int64_t GetUsedSize() const;

                    /**
                     * 判断参数 UsedSize 是否已赋值
                     * @return UsedSize 是否已赋值
                     * 
                     */
                    bool UsedSizeHasBeenSet() const;

                    /**
                     * 获取配额存储总量，单位B
                     * @return TotalSize 配额存储总量，单位B
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取存储天数
                     * @return StorageDay 存储天数
                     * 
                     */
                    int64_t GetStorageDay() const;

                    /**
                     * 判断参数 StorageDay 是否已赋值
                     * @return StorageDay 是否已赋值
                     * 
                     */
                    bool StorageDayHasBeenSet() const;

                    /**
                     * 获取访问控制日志存储量，单位B
                     * @return AclSize 访问控制日志存储量，单位B
                     * 
                     */
                    int64_t GetAclSize() const;

                    /**
                     * 判断参数 AclSize 是否已赋值
                     * @return AclSize 是否已赋值
                     * 
                     */
                    bool AclSizeHasBeenSet() const;

                    /**
                     * 获取入侵防御日志存储量，单位B
                     * @return IdsSize 入侵防御日志存储量，单位B
                     * 
                     */
                    int64_t GetIdsSize() const;

                    /**
                     * 判断参数 IdsSize 是否已赋值
                     * @return IdsSize 是否已赋值
                     * 
                     */
                    bool IdsSizeHasBeenSet() const;

                    /**
                     * 获取流量日志存储量，单位B
                     * @return NetFlowSize 流量日志存储量，单位B
                     * 
                     */
                    int64_t GetNetFlowSize() const;

                    /**
                     * 判断参数 NetFlowSize 是否已赋值
                     * @return NetFlowSize 是否已赋值
                     * 
                     */
                    bool NetFlowSizeHasBeenSet() const;

                    /**
                     * 获取操作日志存储量，单位B
                     * @return OperateSize 操作日志存储量，单位B
                     * 
                     */
                    int64_t GetOperateSize() const;

                    /**
                     * 判断参数 OperateSize 是否已赋值
                     * @return OperateSize 是否已赋值
                     * 
                     */
                    bool OperateSizeHasBeenSet() const;

                    /**
                     * 获取剩余存储量，单位B
                     * @return LeftSize 剩余存储量，单位B
                     * 
                     */
                    int64_t GetLeftSize() const;

                    /**
                     * 判断参数 LeftSize 是否已赋值
                     * @return LeftSize 是否已赋值
                     * 
                     */
                    bool LeftSizeHasBeenSet() const;

                    /**
                     * 获取计费模式，0后付费，1预付费
                     * @return PayMode 计费模式，0后付费，1预付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取每日增加日志存储量柱状图
                     * @return TimeHistogram 每日增加日志存储量柱状图
                     * 
                     */
                    std::vector<StorageHistogram> GetTimeHistogram() const;

                    /**
                     * 判断参数 TimeHistogram 是否已赋值
                     * @return TimeHistogram 是否已赋值
                     * 
                     */
                    bool TimeHistogramHasBeenSet() const;

                    /**
                     * 获取柱形图格式数据
                     * @return TimeHistogramShow 柱形图格式数据
                     * 
                     */
                    StorageHistogramShow GetTimeHistogramShow() const;

                    /**
                     * 判断参数 TimeHistogramShow 是否已赋值
                     * @return TimeHistogramShow 是否已赋值
                     * 
                     */
                    bool TimeHistogramShowHasBeenSet() const;

                    /**
                     * 获取后付费模式存储状态，0正常，1欠费停止写入
                     * @return ArrearsStopWriting 后付费模式存储状态，0正常，1欠费停止写入
                     * 
                     */
                    int64_t GetArrearsStopWriting() const;

                    /**
                     * 判断参数 ArrearsStopWriting 是否已赋值
                     * @return ArrearsStopWriting 是否已赋值
                     * 
                     */
                    bool ArrearsStopWritingHasBeenSet() const;

                private:

                    /**
                     * 返回状态码 0 成功 非0不成功
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 返回信息  success 成功 其他 不成功
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * 已使用存储量，单位B
                     */
                    int64_t m_usedSize;
                    bool m_usedSizeHasBeenSet;

                    /**
                     * 配额存储总量，单位B
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 存储天数
                     */
                    int64_t m_storageDay;
                    bool m_storageDayHasBeenSet;

                    /**
                     * 访问控制日志存储量，单位B
                     */
                    int64_t m_aclSize;
                    bool m_aclSizeHasBeenSet;

                    /**
                     * 入侵防御日志存储量，单位B
                     */
                    int64_t m_idsSize;
                    bool m_idsSizeHasBeenSet;

                    /**
                     * 流量日志存储量，单位B
                     */
                    int64_t m_netFlowSize;
                    bool m_netFlowSizeHasBeenSet;

                    /**
                     * 操作日志存储量，单位B
                     */
                    int64_t m_operateSize;
                    bool m_operateSizeHasBeenSet;

                    /**
                     * 剩余存储量，单位B
                     */
                    int64_t m_leftSize;
                    bool m_leftSizeHasBeenSet;

                    /**
                     * 计费模式，0后付费，1预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 每日增加日志存储量柱状图
                     */
                    std::vector<StorageHistogram> m_timeHistogram;
                    bool m_timeHistogramHasBeenSet;

                    /**
                     * 柱形图格式数据
                     */
                    StorageHistogramShow m_timeHistogramShow;
                    bool m_timeHistogramShowHasBeenSet;

                    /**
                     * 后付费模式存储状态，0正常，1欠费停止写入
                     */
                    int64_t m_arrearsStopWriting;
                    bool m_arrearsStopWritingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_

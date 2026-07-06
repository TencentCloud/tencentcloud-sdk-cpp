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
                     * 获取<p>返回状态码 0 成功 非0不成功</p>
                     * @return ReturnCode <p>返回状态码 0 成功 非0不成功</p>
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
                     * 获取<p>返回信息  success 成功 其他 不成功</p>
                     * @return ReturnMsg <p>返回信息  success 成功 其他 不成功</p>
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
                     * 获取<p>已使用存储量，单位B</p>
                     * @return UsedSize <p>已使用存储量，单位B</p>
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
                     * 获取<p>配额存储总量，单位B</p>
                     * @return TotalSize <p>配额存储总量，单位B</p>
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
                     * 获取<p>存储天数</p>
                     * @return StorageDay <p>存储天数</p>
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
                     * 获取<p>访问控制日志存储量，单位B</p>
                     * @return AclSize <p>访问控制日志存储量，单位B</p>
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
                     * 获取<p>入侵防御日志存储量，单位B</p>
                     * @return IdsSize <p>入侵防御日志存储量，单位B</p>
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
                     * 获取<p>流量日志存储量，单位B</p>
                     * @return NetFlowSize <p>流量日志存储量，单位B</p>
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
                     * 获取<p>操作日志存储量，单位B</p>
                     * @return OperateSize <p>操作日志存储量，单位B</p>
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
                     * 获取<p>剩余存储量，单位B</p>
                     * @return LeftSize <p>剩余存储量，单位B</p>
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
                     * 获取<p>计费模式，0后付费，1预付费</p>
                     * @return PayMode <p>计费模式，0后付费，1预付费</p>
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
                     * 获取<p>每日增加日志存储量柱状图</p>
                     * @return TimeHistogram <p>每日增加日志存储量柱状图</p>
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
                     * 获取<p>柱形图格式数据</p>
                     * @return TimeHistogramShow <p>柱形图格式数据</p>
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
                     * 获取<p>后付费模式存储状态，0正常，1欠费停止写入</p>
                     * @return ArrearsStopWriting <p>后付费模式存储状态，0正常，1欠费停止写入</p>
                     * 
                     */
                    int64_t GetArrearsStopWriting() const;

                    /**
                     * 判断参数 ArrearsStopWriting 是否已赋值
                     * @return ArrearsStopWriting 是否已赋值
                     * 
                     */
                    bool ArrearsStopWritingHasBeenSet() const;

                    /**
                     * 获取<p>NDR流量日志存储量，单位B</p>
                     * @return NDRNetFlowSize <p>NDR流量日志存储量，单位B</p>
                     * 
                     */
                    int64_t GetNDRNetFlowSize() const;

                    /**
                     * 判断参数 NDRNetFlowSize 是否已赋值
                     * @return NDRNetFlowSize 是否已赋值
                     * 
                     */
                    bool NDRNetFlowSizeHasBeenSet() const;

                    /**
                     * 获取<p>NDR风险日志存储量，单位B</p>
                     * @return NDRRiskSize <p>NDR风险日志存储量，单位B</p>
                     * 
                     */
                    int64_t GetNDRRiskSize() const;

                    /**
                     * 判断参数 NDRRiskSize 是否已赋值
                     * @return NDRRiskSize 是否已赋值
                     * 
                     */
                    bool NDRRiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>NDR日志存储天数</p>
                     * @return NDRStorageDay <p>NDR日志存储天数</p>
                     * 
                     */
                    int64_t GetNDRStorageDay() const;

                    /**
                     * 判断参数 NDRStorageDay 是否已赋值
                     * @return NDRStorageDay 是否已赋值
                     * 
                     */
                    bool NDRStorageDayHasBeenSet() const;

                private:

                    /**
                     * <p>返回状态码 0 成功 非0不成功</p>
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>返回信息  success 成功 其他 不成功</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * <p>已使用存储量，单位B</p>
                     */
                    int64_t m_usedSize;
                    bool m_usedSizeHasBeenSet;

                    /**
                     * <p>配额存储总量，单位B</p>
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * <p>存储天数</p>
                     */
                    int64_t m_storageDay;
                    bool m_storageDayHasBeenSet;

                    /**
                     * <p>访问控制日志存储量，单位B</p>
                     */
                    int64_t m_aclSize;
                    bool m_aclSizeHasBeenSet;

                    /**
                     * <p>入侵防御日志存储量，单位B</p>
                     */
                    int64_t m_idsSize;
                    bool m_idsSizeHasBeenSet;

                    /**
                     * <p>流量日志存储量，单位B</p>
                     */
                    int64_t m_netFlowSize;
                    bool m_netFlowSizeHasBeenSet;

                    /**
                     * <p>操作日志存储量，单位B</p>
                     */
                    int64_t m_operateSize;
                    bool m_operateSizeHasBeenSet;

                    /**
                     * <p>剩余存储量，单位B</p>
                     */
                    int64_t m_leftSize;
                    bool m_leftSizeHasBeenSet;

                    /**
                     * <p>计费模式，0后付费，1预付费</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>每日增加日志存储量柱状图</p>
                     */
                    std::vector<StorageHistogram> m_timeHistogram;
                    bool m_timeHistogramHasBeenSet;

                    /**
                     * <p>柱形图格式数据</p>
                     */
                    StorageHistogramShow m_timeHistogramShow;
                    bool m_timeHistogramShowHasBeenSet;

                    /**
                     * <p>后付费模式存储状态，0正常，1欠费停止写入</p>
                     */
                    int64_t m_arrearsStopWriting;
                    bool m_arrearsStopWritingHasBeenSet;

                    /**
                     * <p>NDR流量日志存储量，单位B</p>
                     */
                    int64_t m_nDRNetFlowSize;
                    bool m_nDRNetFlowSizeHasBeenSet;

                    /**
                     * <p>NDR风险日志存储量，单位B</p>
                     */
                    int64_t m_nDRRiskSize;
                    bool m_nDRRiskSizeHasBeenSet;

                    /**
                     * <p>NDR日志存储天数</p>
                     */
                    int64_t m_nDRStorageDay;
                    bool m_nDRStorageDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_

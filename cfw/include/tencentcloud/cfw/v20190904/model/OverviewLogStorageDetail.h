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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWLOGSTORAGEDETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWLOGSTORAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览日志存储详情
                */
                class OverviewLogStorageDetail : public AbstractModel
                {
                public:
                    OverviewLogStorageDetail();
                    ~OverviewLogStorageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志已使用存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return UsedBytes <p>日志已使用存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetUsedBytes() const;

                    /**
                     * 设置<p>日志已使用存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _usedBytes <p>日志已使用存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetUsedBytes(const int64_t& _usedBytes);

                    /**
                     * 判断参数 UsedBytes 是否已赋值
                     * @return UsedBytes 是否已赋值
                     * 
                     */
                    bool UsedBytesHasBeenSet() const;

                    /**
                     * 获取<p>日志总存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return TotalBytes <p>日志总存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetTotalBytes() const;

                    /**
                     * 设置<p>日志总存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _totalBytes <p>日志总存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetTotalBytes(const int64_t& _totalBytes);

                    /**
                     * 判断参数 TotalBytes 是否已赋值
                     * @return TotalBytes 是否已赋值
                     * 
                     */
                    bool TotalBytesHasBeenSet() const;

                    /**
                     * 获取<p>日志保留天数。</p><p>单位：天</p>
                     * @return StorageDay <p>日志保留天数。</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetStorageDay() const;

                    /**
                     * 设置<p>日志保留天数。</p><p>单位：天</p>
                     * @param _storageDay <p>日志保留天数。</p><p>单位：天</p>
                     * 
                     */
                    void SetStorageDay(const int64_t& _storageDay);

                    /**
                     * 判断参数 StorageDay 是否已赋值
                     * @return StorageDay 是否已赋值
                     * 
                     */
                    bool StorageDayHasBeenSet() const;

                    /**
                     * 获取<p>NDR 日志保留天数。</p><p>单位：天</p>
                     * @return NDRStorageDay <p>NDR 日志保留天数。</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetNDRStorageDay() const;

                    /**
                     * 设置<p>NDR 日志保留天数。</p><p>单位：天</p>
                     * @param _nDRStorageDay <p>NDR 日志保留天数。</p><p>单位：天</p>
                     * 
                     */
                    void SetNDRStorageDay(const int64_t& _nDRStorageDay);

                    /**
                     * 判断参数 NDRStorageDay 是否已赋值
                     * @return NDRStorageDay 是否已赋值
                     * 
                     */
                    bool NDRStorageDayHasBeenSet() const;

                    /**
                     * 获取<p>访问控制日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return AclSize <p>访问控制日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetAclSize() const;

                    /**
                     * 设置<p>访问控制日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _aclSize <p>访问控制日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetAclSize(const int64_t& _aclSize);

                    /**
                     * 判断参数 AclSize 是否已赋值
                     * @return AclSize 是否已赋值
                     * 
                     */
                    bool AclSizeHasBeenSet() const;

                    /**
                     * 获取<p>入侵检测日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return IdsSize <p>入侵检测日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetIdsSize() const;

                    /**
                     * 设置<p>入侵检测日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _idsSize <p>入侵检测日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetIdsSize(const int64_t& _idsSize);

                    /**
                     * 判断参数 IdsSize 是否已赋值
                     * @return IdsSize 是否已赋值
                     * 
                     */
                    bool IdsSizeHasBeenSet() const;

                    /**
                     * 获取<p>流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return NetFlowSize <p>流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetNetFlowSize() const;

                    /**
                     * 设置<p>流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _netFlowSize <p>流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetNetFlowSize(const int64_t& _netFlowSize);

                    /**
                     * 判断参数 NetFlowSize 是否已赋值
                     * @return NetFlowSize 是否已赋值
                     * 
                     */
                    bool NetFlowSizeHasBeenSet() const;

                    /**
                     * 获取<p>操作日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return OperateSize <p>操作日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetOperateSize() const;

                    /**
                     * 设置<p>操作日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _operateSize <p>操作日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetOperateSize(const int64_t& _operateSize);

                    /**
                     * 判断参数 OperateSize 是否已赋值
                     * @return OperateSize 是否已赋值
                     * 
                     */
                    bool OperateSizeHasBeenSet() const;

                    /**
                     * 获取<p>NDR 风险日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return NDRRiskSize <p>NDR 风险日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetNDRRiskSize() const;

                    /**
                     * 设置<p>NDR 风险日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _nDRRiskSize <p>NDR 风险日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetNDRRiskSize(const int64_t& _nDRRiskSize);

                    /**
                     * 判断参数 NDRRiskSize 是否已赋值
                     * @return NDRRiskSize 是否已赋值
                     * 
                     */
                    bool NDRRiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>NDR 流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @return NDRNetFlowSize <p>NDR 流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetNDRNetFlowSize() const;

                    /**
                     * 设置<p>NDR 流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * @param _nDRNetFlowSize <p>NDR 流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     * 
                     */
                    void SetNDRNetFlowSize(const int64_t& _nDRNetFlowSize);

                    /**
                     * 判断参数 NDRNetFlowSize 是否已赋值
                     * @return NDRNetFlowSize 是否已赋值
                     * 
                     */
                    bool NDRNetFlowSizeHasBeenSet() const;

                    /**
                     * 获取<p>日志存储计费模式标识。</p>
                     * @return PayMode <p>日志存储计费模式标识。</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>日志存储计费模式标识。</p>
                     * @param _payMode <p>日志存储计费模式标识。</p>
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
                     * 获取<p>是否因欠费停止写入日志的状态标识。</p>
                     * @return ArrearsStopWriting <p>是否因欠费停止写入日志的状态标识。</p>
                     * 
                     */
                    int64_t GetArrearsStopWriting() const;

                    /**
                     * 设置<p>是否因欠费停止写入日志的状态标识。</p>
                     * @param _arrearsStopWriting <p>是否因欠费停止写入日志的状态标识。</p>
                     * 
                     */
                    void SetArrearsStopWriting(const int64_t& _arrearsStopWriting);

                    /**
                     * 判断参数 ArrearsStopWriting 是否已赋值
                     * @return ArrearsStopWriting 是否已赋值
                     * 
                     */
                    bool ArrearsStopWritingHasBeenSet() const;

                private:

                    /**
                     * <p>日志已使用存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_usedBytes;
                    bool m_usedBytesHasBeenSet;

                    /**
                     * <p>日志总存储容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_totalBytes;
                    bool m_totalBytesHasBeenSet;

                    /**
                     * <p>日志保留天数。</p><p>单位：天</p>
                     */
                    int64_t m_storageDay;
                    bool m_storageDayHasBeenSet;

                    /**
                     * <p>NDR 日志保留天数。</p><p>单位：天</p>
                     */
                    int64_t m_nDRStorageDay;
                    bool m_nDRStorageDayHasBeenSet;

                    /**
                     * <p>访问控制日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_aclSize;
                    bool m_aclSizeHasBeenSet;

                    /**
                     * <p>入侵检测日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_idsSize;
                    bool m_idsSizeHasBeenSet;

                    /**
                     * <p>流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_netFlowSize;
                    bool m_netFlowSizeHasBeenSet;

                    /**
                     * <p>操作日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_operateSize;
                    bool m_operateSizeHasBeenSet;

                    /**
                     * <p>NDR 风险日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_nDRRiskSize;
                    bool m_nDRRiskSizeHasBeenSet;

                    /**
                     * <p>NDR 流量日志占用容量，单位为 Byte。</p><p>单位：Byte</p>
                     */
                    int64_t m_nDRNetFlowSize;
                    bool m_nDRNetFlowSizeHasBeenSet;

                    /**
                     * <p>日志存储计费模式标识。</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>是否因欠费停止写入日志的状态标识。</p>
                     */
                    int64_t m_arrearsStopWriting;
                    bool m_arrearsStopWritingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWLOGSTORAGEDETAIL_H_

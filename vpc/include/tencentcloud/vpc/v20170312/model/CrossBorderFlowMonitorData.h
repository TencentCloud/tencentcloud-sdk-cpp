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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERFLOWMONITORDATA_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERFLOWMONITORDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 跨境带宽监控数据
                */
                class CrossBorderFlowMonitorData : public AbstractModel
                {
                public:
                    CrossBorderFlowMonitorData();
                    ~CrossBorderFlowMonitorData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取入带宽，单位：`bps`。
                     * @return InBandwidth 入带宽，单位：`bps`。
                     * 
                     */
                    std::vector<int64_t> GetInBandwidth() const;

                    /**
                     * 设置入带宽，单位：`bps`。
                     * @param _inBandwidth 入带宽，单位：`bps`。
                     * 
                     */
                    void SetInBandwidth(const std::vector<int64_t>& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取出带宽，单位：`bps`。
                     * @return OutBandwidth 出带宽，单位：`bps`。
                     * 
                     */
                    std::vector<int64_t> GetOutBandwidth() const;

                    /**
                     * 设置出带宽，单位：`bps`。
                     * @param _outBandwidth 出带宽，单位：`bps`。
                     * 
                     */
                    void SetOutBandwidth(const std::vector<int64_t>& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取入包，单位：`pps`。
                     * @return InPkg 入包，单位：`pps`。
                     * 
                     */
                    std::vector<int64_t> GetInPkg() const;

                    /**
                     * 设置入包，单位：`pps`。
                     * @param _inPkg 入包，单位：`pps`。
                     * 
                     */
                    void SetInPkg(const std::vector<int64_t>& _inPkg);

                    /**
                     * 判断参数 InPkg 是否已赋值
                     * @return InPkg 是否已赋值
                     * 
                     */
                    bool InPkgHasBeenSet() const;

                    /**
                     * 获取出包，单位：`pps`。
                     * @return OutPkg 出包，单位：`pps`。
                     * 
                     */
                    std::vector<int64_t> GetOutPkg() const;

                    /**
                     * 设置出包，单位：`pps`。
                     * @param _outPkg 出包，单位：`pps`。
                     * 
                     */
                    void SetOutPkg(const std::vector<int64_t>& _outPkg);

                    /**
                     * 判断参数 OutPkg 是否已赋值
                     * @return OutPkg 是否已赋值
                     * 
                     */
                    bool OutPkgHasBeenSet() const;

                private:

                    /**
                     * 入带宽，单位：`bps`。
                     */
                    std::vector<int64_t> m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * 出带宽，单位：`bps`。
                     */
                    std::vector<int64_t> m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * 入包，单位：`pps`。
                     */
                    std::vector<int64_t> m_inPkg;
                    bool m_inPkgHasBeenSet;

                    /**
                     * 出包，单位：`pps`。
                     */
                    std::vector<int64_t> m_outPkg;
                    bool m_outPkgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERFLOWMONITORDATA_H_

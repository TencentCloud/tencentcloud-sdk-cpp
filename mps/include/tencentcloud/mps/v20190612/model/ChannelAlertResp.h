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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CHANNELALERTRESP_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CHANNELALERTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ProgramAlertCounts.h>
#include <tencentcloud/mps/v20190612/model/ProgramAlertInfos.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装频道告警返回信息。
                */
                class ChannelAlertResp : public AbstractModel
                {
                public:
                    ChannelAlertResp();
                    ~ChannelAlertResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Program告警聚合信息。
                     * @return ProgramAlertCounts Program告警聚合信息。
                     * 
                     */
                    std::vector<ProgramAlertCounts> GetProgramAlertCounts() const;

                    /**
                     * 设置Program告警聚合信息。
                     * @param _programAlertCounts Program告警聚合信息。
                     * 
                     */
                    void SetProgramAlertCounts(const std::vector<ProgramAlertCounts>& _programAlertCounts);

                    /**
                     * 判断参数 ProgramAlertCounts 是否已赋值
                     * @return ProgramAlertCounts 是否已赋值
                     * 
                     */
                    bool ProgramAlertCountsHasBeenSet() const;

                    /**
                     * 获取Program告警明细信息。
                     * @return ProgramAlertInfos Program告警明细信息。
                     * 
                     */
                    std::vector<ProgramAlertInfos> GetProgramAlertInfos() const;

                    /**
                     * 设置Program告警明细信息。
                     * @param _programAlertInfos Program告警明细信息。
                     * 
                     */
                    void SetProgramAlertInfos(const std::vector<ProgramAlertInfos>& _programAlertInfos);

                    /**
                     * 判断参数 ProgramAlertInfos 是否已赋值
                     * @return ProgramAlertInfos 是否已赋值
                     * 
                     */
                    bool ProgramAlertInfosHasBeenSet() const;

                private:

                    /**
                     * Program告警聚合信息。
                     */
                    std::vector<ProgramAlertCounts> m_programAlertCounts;
                    bool m_programAlertCountsHasBeenSet;

                    /**
                     * Program告警明细信息。
                     */
                    std::vector<ProgramAlertInfos> m_programAlertInfos;
                    bool m_programAlertInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CHANNELALERTRESP_H_

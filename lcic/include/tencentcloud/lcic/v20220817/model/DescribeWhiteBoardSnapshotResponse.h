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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEWHITEBOARDSNAPSHOTRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEWHITEBOARDSNAPSHOTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeWhiteBoardSnapshot返回参数结构体
                */
                class DescribeWhiteBoardSnapshotResponse : public AbstractModel
                {
                public:
                    DescribeWhiteBoardSnapshotResponse();
                    ~DescribeWhiteBoardSnapshotResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
                     * @return WhiteBoardSnapshotMode 板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
                     * 
                     */
                    uint64_t GetWhiteBoardSnapshotMode() const;

                    /**
                     * 判断参数 WhiteBoardSnapshotMode 是否已赋值
                     * @return WhiteBoardSnapshotMode 是否已赋值
                     * 
                     */
                    bool WhiteBoardSnapshotModeHasBeenSet() const;

                    /**
                     * 获取板书任务状态，0：未开始，1：进行中，2：失败，3：成功，4：已删除
                     * @return Status 板书任务状态，0：未开始，1：进行中，2：失败，3：成功，4：已删除
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取板书截图链接
                     * @return Result 板书截图链接
                     * 
                     */
                    std::vector<std::string> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
                     */
                    uint64_t m_whiteBoardSnapshotMode;
                    bool m_whiteBoardSnapshotModeHasBeenSet;

                    /**
                     * 板书任务状态，0：未开始，1：进行中，2：失败，3：成功，4：已删除
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 板书截图链接
                     */
                    std::vector<std::string> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEWHITEBOARDSNAPSHOTRESPONSE_H_

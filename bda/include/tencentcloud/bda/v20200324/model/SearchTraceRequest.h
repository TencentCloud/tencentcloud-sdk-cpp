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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_SEARCHTRACEREQUEST_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_SEARCHTRACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/Trace.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * SearchTrace请求参数结构体
                */
                class SearchTraceRequest : public AbstractModel
                {
                public:
                    SearchTraceRequest();
                    ~SearchTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取希望搜索的人体库ID。
                     * @return GroupId 希望搜索的人体库ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置希望搜索的人体库ID。
                     * @param _groupId 希望搜索的人体库ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取人体动作轨迹信息。
                     * @return Trace 人体动作轨迹信息。
                     * 
                     */
                    Trace GetTrace() const;

                    /**
                     * 设置人体动作轨迹信息。
                     * @param _trace 人体动作轨迹信息。
                     * 
                     */
                    void SetTrace(const Trace& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     * 
                     */
                    bool TraceHasBeenSet() const;

                    /**
                     * 获取单张被识别的人体动作轨迹返回的最相似人员数量。
默认值为5，最大值为100。
 例，设MaxPersonNum为8，则返回Top8相似的人员信息。 值越大，需要处理的时间越长。建议不要超过10。
                     * @return MaxPersonNum 单张被识别的人体动作轨迹返回的最相似人员数量。
默认值为5，最大值为100。
 例，设MaxPersonNum为8，则返回Top8相似的人员信息。 值越大，需要处理的时间越长。建议不要超过10。
                     * 
                     */
                    uint64_t GetMaxPersonNum() const;

                    /**
                     * 设置单张被识别的人体动作轨迹返回的最相似人员数量。
默认值为5，最大值为100。
 例，设MaxPersonNum为8，则返回Top8相似的人员信息。 值越大，需要处理的时间越长。建议不要超过10。
                     * @param _maxPersonNum 单张被识别的人体动作轨迹返回的最相似人员数量。
默认值为5，最大值为100。
 例，设MaxPersonNum为8，则返回Top8相似的人员信息。 值越大，需要处理的时间越长。建议不要超过10。
                     * 
                     */
                    void SetMaxPersonNum(const uint64_t& _maxPersonNum);

                    /**
                     * 判断参数 MaxPersonNum 是否已赋值
                     * @return MaxPersonNum 是否已赋值
                     * 
                     */
                    bool MaxPersonNumHasBeenSet() const;

                    /**
                     * 获取出参Score中，只有超过TraceMatchThreshold值的结果才会返回。
默认为0。范围[0, 100.0]。
                     * @return TraceMatchThreshold 出参Score中，只有超过TraceMatchThreshold值的结果才会返回。
默认为0。范围[0, 100.0]。
                     * 
                     */
                    double GetTraceMatchThreshold() const;

                    /**
                     * 设置出参Score中，只有超过TraceMatchThreshold值的结果才会返回。
默认为0。范围[0, 100.0]。
                     * @param _traceMatchThreshold 出参Score中，只有超过TraceMatchThreshold值的结果才会返回。
默认为0。范围[0, 100.0]。
                     * 
                     */
                    void SetTraceMatchThreshold(const double& _traceMatchThreshold);

                    /**
                     * 判断参数 TraceMatchThreshold 是否已赋值
                     * @return TraceMatchThreshold 是否已赋值
                     * 
                     */
                    bool TraceMatchThresholdHasBeenSet() const;

                private:

                    /**
                     * 希望搜索的人体库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人体动作轨迹信息。
                     */
                    Trace m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * 单张被识别的人体动作轨迹返回的最相似人员数量。
默认值为5，最大值为100。
 例，设MaxPersonNum为8，则返回Top8相似的人员信息。 值越大，需要处理的时间越长。建议不要超过10。
                     */
                    uint64_t m_maxPersonNum;
                    bool m_maxPersonNumHasBeenSet;

                    /**
                     * 出参Score中，只有超过TraceMatchThreshold值的结果才会返回。
默认为0。范围[0, 100.0]。
                     */
                    double m_traceMatchThreshold;
                    bool m_traceMatchThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_SEARCHTRACEREQUEST_H_

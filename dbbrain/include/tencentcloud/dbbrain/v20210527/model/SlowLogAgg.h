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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGAGG_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGAGG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * redis top慢日志聚合详情。
                */
                class SlowLogAgg : public AbstractModel
                {
                public:
                    SlowLogAgg();
                    ~SlowLogAgg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命令模版。
                     * @return Cmd 命令模版。
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令模版。
                     * @param _cmd 命令模版。
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取命令详情。
                     * @return Detail 命令详情。
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置命令详情。
                     * @param _detail 命令详情。
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取执行次数。
                     * @return ExecTimes 执行次数。
                     * 
                     */
                    int64_t GetExecTimes() const;

                    /**
                     * 设置执行次数。
                     * @param _execTimes 执行次数。
                     * 
                     */
                    void SetExecTimes(const int64_t& _execTimes);

                    /**
                     * 判断参数 ExecTimes 是否已赋值
                     * @return ExecTimes 是否已赋值
                     * 
                     */
                    bool ExecTimesHasBeenSet() const;

                    /**
                     * 获取总耗时。
                     * @return QueryTime 总耗时。
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置总耗时。
                     * @param _queryTime 总耗时。
                     * 
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取平均执行时间。
                     * @return QueryTimeAvg 平均执行时间。
                     * 
                     */
                    double GetQueryTimeAvg() const;

                    /**
                     * 设置平均执行时间。
                     * @param _queryTimeAvg 平均执行时间。
                     * 
                     */
                    void SetQueryTimeAvg(const double& _queryTimeAvg);

                    /**
                     * 判断参数 QueryTimeAvg 是否已赋值
                     * @return QueryTimeAvg 是否已赋值
                     * 
                     */
                    bool QueryTimeAvgHasBeenSet() const;

                    /**
                     * 获取最大执行时间。
                     * @return QueryTimeMax 最大执行时间。
                     * 
                     */
                    double GetQueryTimeMax() const;

                    /**
                     * 设置最大执行时间。
                     * @param _queryTimeMax 最大执行时间。
                     * 
                     */
                    void SetQueryTimeMax(const double& _queryTimeMax);

                    /**
                     * 判断参数 QueryTimeMax 是否已赋值
                     * @return QueryTimeMax 是否已赋值
                     * 
                     */
                    bool QueryTimeMaxHasBeenSet() const;

                    /**
                     * 获取最小执行时间。
                     * @return QueryTimeMin 最小执行时间。
                     * 
                     */
                    double GetQueryTimeMin() const;

                    /**
                     * 设置最小执行时间。
                     * @param _queryTimeMin 最小执行时间。
                     * 
                     */
                    void SetQueryTimeMin(const double& _queryTimeMin);

                    /**
                     * 判断参数 QueryTimeMin 是否已赋值
                     * @return QueryTimeMin 是否已赋值
                     * 
                     */
                    bool QueryTimeMinHasBeenSet() const;

                    /**
                     * 获取总耗时占比
                     * @return QueryTimeRatio 总耗时占比
                     * 
                     */
                    double GetQueryTimeRatio() const;

                    /**
                     * 设置总耗时占比
                     * @param _queryTimeRatio 总耗时占比
                     * 
                     */
                    void SetQueryTimeRatio(const double& _queryTimeRatio);

                    /**
                     * 判断参数 QueryTimeRatio 是否已赋值
                     * @return QueryTimeRatio 是否已赋值
                     * 
                     */
                    bool QueryTimeRatioHasBeenSet() const;

                private:

                    /**
                     * 命令模版。
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 命令详情。
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 执行次数。
                     */
                    int64_t m_execTimes;
                    bool m_execTimesHasBeenSet;

                    /**
                     * 总耗时。
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * 平均执行时间。
                     */
                    double m_queryTimeAvg;
                    bool m_queryTimeAvgHasBeenSet;

                    /**
                     * 最大执行时间。
                     */
                    double m_queryTimeMax;
                    bool m_queryTimeMaxHasBeenSet;

                    /**
                     * 最小执行时间。
                     */
                    double m_queryTimeMin;
                    bool m_queryTimeMinHasBeenSet;

                    /**
                     * 总耗时占比
                     */
                    double m_queryTimeRatio;
                    bool m_queryTimeRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGAGG_H_

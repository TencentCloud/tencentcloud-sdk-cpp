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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeScoresV2请求参数结构体
                */
                class DescribeScoresV2Request : public AbstractModel
                {
                public:
                    DescribeScoresV2Request();
                    ~DescribeScoresV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID 列表</p>
                     * @return IDList <p>项目 ID 列表</p>
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置<p>项目 ID 列表</p>
                     * @param _iDList <p>项目 ID 列表</p>
                     * 
                     */
                    void SetIDList(const std::vector<int64_t>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                    /**
                     * 获取<p>查询粒度，hour 或 day</p>
                     * @return Type <p>查询粒度，hour 或 day</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>查询粒度，hour 或 day</p>
                     * @param _type <p>查询粒度，hour 或 day</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>环境</p>
                     * @return Env <p>环境</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>环境</p>
                     * @param _env <p>环境</p>
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目 ID 列表</p>
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                    /**
                     * <p>查询粒度，hour 或 day</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>环境</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESV2REQUEST_H_

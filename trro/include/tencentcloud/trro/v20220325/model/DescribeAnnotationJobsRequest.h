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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEANNOTATIONJOBSREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEANNOTATIONJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeAnnotationJobs请求参数结构体
                */
                class DescribeAnnotationJobsRequest : public AbstractModel
                {
                public:
                    DescribeAnnotationJobsRequest();
                    ~DescribeAnnotationJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页偏移，默认 0</p>
                     * @return Offset <p>分页偏移，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移，默认 0</p>
                     * @param _offset <p>分页偏移，默认 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     * @return Limit <p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     * @param _limit <p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>按任务状态过滤：1 处理中，2 异常，3 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * @return Status <p>按任务状态过滤：1 处理中，2 异常，3 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>按任务状态过滤：1 处理中，2 异常，3 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * @param _status <p>按任务状态过滤：1 处理中，2 异常，3 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>按输入路径前缀过滤，不传不过滤</p>
                     * @return InputPath <p>按输入路径前缀过滤，不传不过滤</p>
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置<p>按输入路径前缀过滤，不传不过滤</p>
                     * @param _inputPath <p>按输入路径前缀过滤，不传不过滤</p>
                     * 
                     */
                    void SetInputPath(const std::string& _inputPath);

                    /**
                     * 判断参数 InputPath 是否已赋值
                     * @return InputPath 是否已赋值
                     * 
                     */
                    bool InputPathHasBeenSet() const;

                private:

                    /**
                     * <p>分页偏移，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>按任务状态过滤：1 处理中，2 异常，3 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>按输入路径前缀过滤，不传不过滤</p>
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEANNOTATIONJOBSREQUEST_H_

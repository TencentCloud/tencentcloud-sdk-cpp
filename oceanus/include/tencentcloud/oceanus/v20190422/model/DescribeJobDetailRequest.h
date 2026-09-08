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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBDETAILREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobDetail请求参数结构体
                */
                class DescribeJobDetailRequest : public AbstractModel
                {
                public:
                    DescribeJobDetailRequest();
                    ~DescribeJobDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取flink rest api 路径
                     * @return Path flink rest api 路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置flink rest api 路径
                     * @param _path flink rest api 路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取作业id
                     * @return JobSerialId 作业id
                     * 
                     */
                    std::string GetJobSerialId() const;

                    /**
                     * 设置作业id
                     * @param _jobSerialId 作业id
                     * 
                     */
                    void SetJobSerialId(const std::string& _jobSerialId);

                    /**
                     * 判断参数 JobSerialId 是否已赋值
                     * @return JobSerialId 是否已赋值
                     * 
                     */
                    bool JobSerialIdHasBeenSet() const;

                    /**
                     * 获取请求rest api 方法
                     * @return Method 请求rest api 方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求rest api 方法
                     * @param _method 请求rest api 方法
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                private:

                    /**
                     * flink rest api 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 作业id
                     */
                    std::string m_jobSerialId;
                    bool m_jobSerialIdHasBeenSet;

                    /**
                     * 请求rest api 方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBDETAILREQUEST_H_

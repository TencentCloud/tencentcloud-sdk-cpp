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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEREQUESTINSTANCEPOLICYRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEREQUESTINSTANCEPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeRequestInstancePolicy返回参数结构体
                */
                class DescribeRequestInstancePolicyResponse : public AbstractModel
                {
                public:
                    DescribeRequestInstancePolicyResponse();
                    ~DescribeRequestInstancePolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>GET路径可请求的命令合集</p>
                     * @return GetPaths <p>GET路径可请求的命令合集</p>
                     * 
                     */
                    std::vector<std::string> GetGetPaths() const;

                    /**
                     * 判断参数 GetPaths 是否已赋值
                     * @return GetPaths 是否已赋值
                     * 
                     */
                    bool GetPathsHasBeenSet() const;

                    /**
                     * 获取<p>POST路径可请求的命令合集</p>
                     * @return PostPaths <p>POST路径可请求的命令合集</p>
                     * 
                     */
                    std::vector<std::string> GetPostPaths() const;

                    /**
                     * 判断参数 PostPaths 是否已赋值
                     * @return PostPaths 是否已赋值
                     * 
                     */
                    bool PostPathsHasBeenSet() const;

                    /**
                     * 获取<p>PUT路径可请求的命令合集</p>
                     * @return PutPaths <p>PUT路径可请求的命令合集</p>
                     * 
                     */
                    std::vector<std::string> GetPutPaths() const;

                    /**
                     * 判断参数 PutPaths 是否已赋值
                     * @return PutPaths 是否已赋值
                     * 
                     */
                    bool PutPathsHasBeenSet() const;

                    /**
                     * 获取<p>是否是默认的参数</p>
                     * @return IsDefault <p>是否是默认的参数</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>变更时间</p>
                     * @return UpdateTime <p>变更时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>变更人</p>
                     * @return Operator <p>变更人</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>GET路径可请求的命令合集</p>
                     */
                    std::vector<std::string> m_getPaths;
                    bool m_getPathsHasBeenSet;

                    /**
                     * <p>POST路径可请求的命令合集</p>
                     */
                    std::vector<std::string> m_postPaths;
                    bool m_postPathsHasBeenSet;

                    /**
                     * <p>PUT路径可请求的命令合集</p>
                     */
                    std::vector<std::string> m_putPaths;
                    bool m_putPathsHasBeenSet;

                    /**
                     * <p>是否是默认的参数</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>变更时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>变更人</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEREQUESTINSTANCEPOLICYRESPONSE_H_

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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PARSEDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PARSEDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ParseDoc请求参数结构体
                */
                class ParseDocRequest : public AbstractModel
                {
                public:
                    ParseDocRequest();
                    ~ParseDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件名称(需要包括文件后缀, 最大长度1024字节)
                     * @return Name 文件名称(需要包括文件后缀, 最大长度1024字节)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件名称(需要包括文件后缀, 最大长度1024字节)
                     * @param _name 文件名称(需要包括文件后缀, 最大长度1024字节)
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件下载链接 (支持的文件类型: docx, txt, markdown, pdf)
                     * @return Url 文件下载链接 (支持的文件类型: docx, txt, markdown, pdf)
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文件下载链接 (支持的文件类型: docx, txt, markdown, pdf)
                     * @param _url 文件下载链接 (支持的文件类型: docx, txt, markdown, pdf)
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取任务ID, 用于幂等去重, 业务自行定义(最大长度64字节)
                     * @return TaskId 任务ID, 用于幂等去重, 业务自行定义(最大长度64字节)
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID, 用于幂等去重, 业务自行定义(最大长度64字节)
                     * @param _taskId 任务ID, 用于幂等去重, 业务自行定义(最大长度64字节)
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取切分策略
                     * @return Policy 切分策略
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置切分策略
                     * @param _policy 切分策略
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取默认值: split
                     * @return Operate 默认值: split
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置默认值: split
                     * @param _operate 默认值: split
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * 文件名称(需要包括文件后缀, 最大长度1024字节)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件下载链接 (支持的文件类型: docx, txt, markdown, pdf)
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 任务ID, 用于幂等去重, 业务自行定义(最大长度64字节)
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 切分策略
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 默认值: split
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PARSEDOCREQUEST_H_

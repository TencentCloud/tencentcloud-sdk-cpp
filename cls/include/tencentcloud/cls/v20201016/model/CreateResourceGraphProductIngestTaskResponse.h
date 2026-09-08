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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATERESOURCEGRAPHPRODUCTINGESTTASKRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATERESOURCEGRAPHPRODUCTINGESTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateResourceGraphProductIngestTask返回参数结构体
                */
                class CreateResourceGraphProductIngestTaskResponse : public AbstractModel
                {
                public:
                    CreateResourceGraphProductIngestTaskResponse();
                    ~CreateResourceGraphProductIngestTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入任务id</p>
                     * @return TaskId <p>接入任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>接入任务状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 正常</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li><li>6： 修改中</li><li>7： 修改失败</li></ul>
                     * @return Status <p>接入任务状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 正常</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li><li>6： 修改中</li><li>7： 修改失败</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>接入任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>接入任务状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 正常</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li><li>6： 修改中</li><li>7： 修改失败</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATERESOURCEGRAPHPRODUCTINGESTTASKRESPONSE_H_

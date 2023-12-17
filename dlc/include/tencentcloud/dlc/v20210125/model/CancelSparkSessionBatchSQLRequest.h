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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CANCELSPARKSESSIONBATCHSQLREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CANCELSPARKSESSIONBATCHSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CancelSparkSessionBatchSQL请求参数结构体
                */
                class CancelSparkSessionBatchSQLRequest : public AbstractModel
                {
                public:
                    CancelSparkSessionBatchSQLRequest();
                    ~CancelSparkSessionBatchSQLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批任务唯一标识
                     * @return BatchId 批任务唯一标识
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批任务唯一标识
                     * @param _batchId 批任务唯一标识
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取用户自定义主键，若不为空，则使用该值进行查询
                     * @return CustomKey 用户自定义主键，若不为空，则使用该值进行查询
                     * 
                     */
                    std::string GetCustomKey() const;

                    /**
                     * 设置用户自定义主键，若不为空，则使用该值进行查询
                     * @param _customKey 用户自定义主键，若不为空，则使用该值进行查询
                     * 
                     */
                    void SetCustomKey(const std::string& _customKey);

                    /**
                     * 判断参数 CustomKey 是否已赋值
                     * @return CustomKey 是否已赋值
                     * 
                     */
                    bool CustomKeyHasBeenSet() const;

                private:

                    /**
                     * 批任务唯一标识
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 用户自定义主键，若不为空，则使用该值进行查询
                     */
                    std::string m_customKey;
                    bool m_customKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CANCELSPARKSESSIONBATCHSQLREQUEST_H_

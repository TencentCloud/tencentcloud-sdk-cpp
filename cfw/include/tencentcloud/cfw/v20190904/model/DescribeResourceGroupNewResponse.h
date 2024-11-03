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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeResourceGroupNew返回参数结构体
                */
                class DescribeResourceGroupNewResponse : public AbstractModel
                {
                public:
                    DescribeResourceGroupNewResponse();
                    ~DescribeResourceGroupNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回树形结构
                     * @return Data 返回树形结构
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取返回码；0为请求成功
                     * @return ReturnCode 返回码；0为请求成功
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取接口返回消息
                     * @return ReturnMsg 接口返回消息
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取未分类实例数量
                     * @return UnResourceNum 未分类实例数量
                     * 
                     */
                    int64_t GetUnResourceNum() const;

                    /**
                     * 判断参数 UnResourceNum 是否已赋值
                     * @return UnResourceNum 是否已赋值
                     * 
                     */
                    bool UnResourceNumHasBeenSet() const;

                private:

                    /**
                     * 返回树形结构
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 返回码；0为请求成功
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 接口返回消息
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * 未分类实例数量
                     */
                    int64_t m_unResourceNum;
                    bool m_unResourceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWRESPONSE_H_

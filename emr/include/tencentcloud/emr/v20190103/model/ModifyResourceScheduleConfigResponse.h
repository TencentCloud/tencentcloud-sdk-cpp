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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResourceScheduleConfig返回参数结构体
                */
                class ModifyResourceScheduleConfigResponse : public AbstractModel
                {
                public:
                    ModifyResourceScheduleConfigResponse();
                    ~ModifyResourceScheduleConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true为草稿，表示还没有刷新资源池
                     * @return IsDraft true为草稿，表示还没有刷新资源池
                     * 
                     */
                    bool GetIsDraft() const;

                    /**
                     * 判断参数 IsDraft 是否已赋值
                     * @return IsDraft 是否已赋值
                     * 
                     */
                    bool IsDraftHasBeenSet() const;

                    /**
                     * 获取校验错误信息，如果不为空，则说明校验失败，配置没有成功
                     * @return ErrorMsg 校验错误信息，如果不为空，则说明校验失败，配置没有成功
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取返回数据
                     * @return Data 返回数据
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * true为草稿，表示还没有刷新资源池
                     */
                    bool m_isDraft;
                    bool m_isDraftHasBeenSet;

                    /**
                     * 校验错误信息，如果不为空，则说明校验失败，配置没有成功
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 返回数据
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGRESPONSE_H_

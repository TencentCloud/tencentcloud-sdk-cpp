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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_STARTBASELINEDETECTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_STARTBASELINEDETECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineDetectParam.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * StartBaselineDetect请求参数结构体
                */
                class StartBaselineDetectRequest : public AbstractModel
                {
                public:
                    StartBaselineDetectRequest();
                    ~StartBaselineDetectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基线检测参数
                     * @return Param 基线检测参数
                     * 
                     */
                    BaselineDetectParam GetParam() const;

                    /**
                     * 设置基线检测参数
                     * @param _param 基线检测参数
                     * 
                     */
                    void SetParam(const BaselineDetectParam& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                private:

                    /**
                     * 基线检测参数
                     */
                    BaselineDetectParam m_param;
                    bool m_paramHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_STARTBASELINEDETECTREQUEST_H_

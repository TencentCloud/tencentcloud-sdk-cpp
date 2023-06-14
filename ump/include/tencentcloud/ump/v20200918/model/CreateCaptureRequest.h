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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAPTUREREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAPTUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * CreateCapture请求参数结构体
                */
                class CreateCaptureRequest : public AbstractModel
                {
                public:
                    CreateCaptureRequest();
                    ~CreateCaptureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取原始抓拍报文
                     * @return Data 原始抓拍报文
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置原始抓拍报文
                     * @param _data 原始抓拍报文
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 原始抓拍报文
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAPTUREREQUEST_H_

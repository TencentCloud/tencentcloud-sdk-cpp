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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEIOTDATATYPEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEIOTDATATYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateIotDataType请求参数结构体
                */
                class CreateIotDataTypeRequest : public AbstractModel
                {
                public:
                    CreateIotDataTypeRequest();
                    ~CreateIotDataTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户自定义数据类型，json格式的字符串
                     * @return IotDataType 用户自定义数据类型，json格式的字符串
                     * 
                     */
                    std::string GetIotDataType() const;

                    /**
                     * 设置用户自定义数据类型，json格式的字符串
                     * @param _iotDataType 用户自定义数据类型，json格式的字符串
                     * 
                     */
                    void SetIotDataType(const std::string& _iotDataType);

                    /**
                     * 判断参数 IotDataType 是否已赋值
                     * @return IotDataType 是否已赋值
                     * 
                     */
                    bool IotDataTypeHasBeenSet() const;

                private:

                    /**
                     * 用户自定义数据类型，json格式的字符串
                     */
                    std::string m_iotDataType;
                    bool m_iotDataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEIOTDATATYPEREQUEST_H_

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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMEDIAMETADATAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMEDIAMETADATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeMediaMetaData请求参数结构体
                */
                class DescribeMediaMetaDataRequest : public AbstractModel
                {
                public:
                    DescribeMediaMetaDataRequest();
                    ~DescribeMediaMetaDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要获取元信息的文件输入信息。
                     * @return InputInfo 需要获取元信息的文件输入信息。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置需要获取元信息的文件输入信息。
                     * @param _inputInfo 需要获取元信息的文件输入信息。
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                private:

                    /**
                     * 需要获取元信息的文件输入信息。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMEDIAMETADATAREQUEST_H_

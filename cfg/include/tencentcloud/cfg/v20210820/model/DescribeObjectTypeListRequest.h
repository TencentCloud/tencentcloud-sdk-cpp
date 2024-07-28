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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeObjectTypeList请求参数结构体
                */
                class DescribeObjectTypeListRequest : public AbstractModel
                {
                public:
                    DescribeObjectTypeListRequest();
                    ~DescribeObjectTypeListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所支持的对象
0：全平台产品
1：平台接入的对象
2：应用所支持的部分对象
                     * @return SupportType 所支持的对象
0：全平台产品
1：平台接入的对象
2：应用所支持的部分对象
                     * 
                     */
                    int64_t GetSupportType() const;

                    /**
                     * 设置所支持的对象
0：全平台产品
1：平台接入的对象
2：应用所支持的部分对象
                     * @param _supportType 所支持的对象
0：全平台产品
1：平台接入的对象
2：应用所支持的部分对象
                     * 
                     */
                    void SetSupportType(const int64_t& _supportType);

                    /**
                     * 判断参数 SupportType 是否已赋值
                     * @return SupportType 是否已赋值
                     * 
                     */
                    bool SupportTypeHasBeenSet() const;

                private:

                    /**
                     * 所支持的对象
0：全平台产品
1：平台接入的对象
2：应用所支持的部分对象
                     */
                    int64_t m_supportType;
                    bool m_supportTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTREQUEST_H_

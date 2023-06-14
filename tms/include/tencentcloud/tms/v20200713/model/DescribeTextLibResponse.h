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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_DESCRIBETEXTLIBRESPONSE_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_DESCRIBETEXTLIBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20200713/model/TextLib.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * DescribeTextLib返回参数结构体
                */
                class DescribeTextLibResponse : public AbstractModel
                {
                public:
                    DescribeTextLibResponse();
                    ~DescribeTextLibResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文本库id和name列表
                     * @return TextLib 文本库id和name列表
                     * 
                     */
                    std::vector<TextLib> GetTextLib() const;

                    /**
                     * 判断参数 TextLib 是否已赋值
                     * @return TextLib 是否已赋值
                     * 
                     */
                    bool TextLibHasBeenSet() const;

                private:

                    /**
                     * 文本库id和name列表
                     */
                    std::vector<TextLib> m_textLib;
                    bool m_textLibHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_DESCRIBETEXTLIBRESPONSE_H_

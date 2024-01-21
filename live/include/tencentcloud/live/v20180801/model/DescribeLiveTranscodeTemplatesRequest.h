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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveTranscodeTemplates请求参数结构体
                */
                class DescribeLiveTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeTemplatesRequest();
                    ~DescribeLiveTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转码模板类型，默认0。
0：普通转码模板。
1：自适应码率转码模板。
                     * @return TemplateType 转码模板类型，默认0。
0：普通转码模板。
1：自适应码率转码模板。
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置转码模板类型，默认0。
0：普通转码模板。
1：自适应码率转码模板。
                     * @param _templateType 转码模板类型，默认0。
0：普通转码模板。
1：自适应码率转码模板。
                     * 
                     */
                    void SetTemplateType(const int64_t& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                private:

                    /**
                     * 转码模板类型，默认0。
0：普通转码模板。
1：自适应码率转码模板。
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETEMPLATESREQUEST_H_

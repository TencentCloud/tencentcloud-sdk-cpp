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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/PURL.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * DescribeKBComponentVersionList请求参数结构体
                */
                class DescribeKBComponentVersionListRequest : public AbstractModel
                {
                public:
                    DescribeKBComponentVersionListRequest();
                    ~DescribeKBComponentVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的组件 PURL
                     * @return PURL 要查询的组件 PURL
                     * 
                     */
                    PURL GetPURL() const;

                    /**
                     * 设置要查询的组件 PURL
                     * @param _pURL 要查询的组件 PURL
                     * 
                     */
                    void SetPURL(const PURL& _pURL);

                    /**
                     * 判断参数 PURL 是否已赋值
                     * @return PURL 是否已赋值
                     * 
                     */
                    bool PURLHasBeenSet() const;

                private:

                    /**
                     * 要查询的组件 PURL
                     */
                    PURL m_pURL;
                    bool m_pURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTREQUEST_H_

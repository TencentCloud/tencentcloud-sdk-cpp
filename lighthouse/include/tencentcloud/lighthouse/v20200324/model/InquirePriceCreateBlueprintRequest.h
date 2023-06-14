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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEBLUEPRINTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEBLUEPRINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * InquirePriceCreateBlueprint请求参数结构体
                */
                class InquirePriceCreateBlueprintRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateBlueprintRequest();
                    ~InquirePriceCreateBlueprintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义镜像的个数。默认值为1。
                     * @return BlueprintCount 自定义镜像的个数。默认值为1。
                     * 
                     */
                    int64_t GetBlueprintCount() const;

                    /**
                     * 设置自定义镜像的个数。默认值为1。
                     * @param _blueprintCount 自定义镜像的个数。默认值为1。
                     * 
                     */
                    void SetBlueprintCount(const int64_t& _blueprintCount);

                    /**
                     * 判断参数 BlueprintCount 是否已赋值
                     * @return BlueprintCount 是否已赋值
                     * 
                     */
                    bool BlueprintCountHasBeenSet() const;

                private:

                    /**
                     * 自定义镜像的个数。默认值为1。
                     */
                    int64_t m_blueprintCount;
                    bool m_blueprintCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEBLUEPRINTREQUEST_H_

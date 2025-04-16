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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTORELOCATIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTORELOCATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeStoreLocation返回参数结构体
                */
                class DescribeStoreLocationResponse : public AbstractModel
                {
                public:
                    DescribeStoreLocationResponse();
                    ~DescribeStoreLocationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回用户设置的结果存储位置路径，如果未设置则返回空字符串：""
                     * @return StoreLocation 返回用户设置的结果存储位置路径，如果未设置则返回空字符串：""
                     * 
                     */
                    std::string GetStoreLocation() const;

                    /**
                     * 判断参数 StoreLocation 是否已赋值
                     * @return StoreLocation 是否已赋值
                     * 
                     */
                    bool StoreLocationHasBeenSet() const;

                private:

                    /**
                     * 返回用户设置的结果存储位置路径，如果未设置则返回空字符串：""
                     */
                    std::string m_storeLocation;
                    bool m_storeLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTORELOCATIONRESPONSE_H_

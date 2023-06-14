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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRBLOCKSTATUSREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRBLOCKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * ModifyCRBlockStatus请求参数结构体
                */
                class ModifyCRBlockStatusRequest : public AbstractModel
                {
                public:
                    ModifyCRBlockStatusRequest();
                    ~ModifyCRBlockStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取侵权ID
                     * @return TortId 侵权ID
                     * 
                     */
                    int64_t GetTortId() const;

                    /**
                     * 设置侵权ID
                     * @param _tortId 侵权ID
                     * 
                     */
                    void SetTortId(const int64_t& _tortId);

                    /**
                     * 判断参数 TortId 是否已赋值
                     * @return TortId 是否已赋值
                     * 
                     */
                    bool TortIdHasBeenSet() const;

                    /**
                     * 获取拦截结果回调地址
                     * @return BlockUrl 拦截结果回调地址
                     * 
                     */
                    std::string GetBlockUrl() const;

                    /**
                     * 设置拦截结果回调地址
                     * @param _blockUrl 拦截结果回调地址
                     * 
                     */
                    void SetBlockUrl(const std::string& _blockUrl);

                    /**
                     * 判断参数 BlockUrl 是否已赋值
                     * @return BlockUrl 是否已赋值
                     * 
                     */
                    bool BlockUrlHasBeenSet() const;

                private:

                    /**
                     * 侵权ID
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

                    /**
                     * 拦截结果回调地址
                     */
                    std::string m_blockUrl;
                    bool m_blockUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRBLOCKSTATUSREQUEST_H_

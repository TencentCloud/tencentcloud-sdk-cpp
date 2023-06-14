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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEFAVORREPOSITORYPERSONALRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEFAVORREPOSITORYPERSONALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/FavorResp.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeFavorRepositoryPersonal返回参数结构体
                */
                class DescribeFavorRepositoryPersonalResponse : public AbstractModel
                {
                public:
                    DescribeFavorRepositoryPersonalResponse();
                    ~DescribeFavorRepositoryPersonalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取个人收藏仓库列表返回信息
                     * @return Data 个人收藏仓库列表返回信息
                     * 
                     */
                    FavorResp GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 个人收藏仓库列表返回信息
                     */
                    FavorResp m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEFAVORREPOSITORYPERSONALRESPONSE_H_

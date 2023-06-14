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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSPSET_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSPSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiRsp.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateApiRsp  返回加TotalCount
                */
                class CreateApiRspSet : public AbstractModel
                {
                public:
                    CreateApiRspSet();
                    ~CreateApiRspSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取个数
                     * @return TotalCount 个数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置个数
                     * @param _totalCount 个数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回的数组
                     * @return ApiSet 返回的数组
                     * 
                     */
                    std::vector<CreateApiRsp> GetApiSet() const;

                    /**
                     * 设置返回的数组
                     * @param _apiSet 返回的数组
                     * 
                     */
                    void SetApiSet(const std::vector<CreateApiRsp>& _apiSet);

                    /**
                     * 判断参数 ApiSet 是否已赋值
                     * @return ApiSet 是否已赋值
                     * 
                     */
                    bool ApiSetHasBeenSet() const;

                private:

                    /**
                     * 个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回的数组
                     */
                    std::vector<CreateApiRsp> m_apiSet;
                    bool m_apiSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSPSET_H_

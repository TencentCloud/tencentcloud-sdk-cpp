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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEGATEWAYAPIREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEGATEWAYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ApiInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateGatewayApi请求参数结构体
                */
                class CreateGatewayApiRequest : public AbstractModel
                {
                public:
                    CreateGatewayApiRequest();
                    ~CreateGatewayApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API 分组ID
                     * @return GroupId API 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置API 分组ID
                     * @param _groupId API 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Api信息
                     * @return ApiList Api信息
                     * 
                     */
                    std::vector<ApiInfo> GetApiList() const;

                    /**
                     * 设置Api信息
                     * @param _apiList Api信息
                     * 
                     */
                    void SetApiList(const std::vector<ApiInfo>& _apiList);

                    /**
                     * 判断参数 ApiList 是否已赋值
                     * @return ApiList 是否已赋值
                     * 
                     */
                    bool ApiListHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

                    /**
                     * API 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Api信息
                     */
                    std::vector<ApiInfo> m_apiList;
                    bool m_apiListHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEGATEWAYAPIREQUEST_H_

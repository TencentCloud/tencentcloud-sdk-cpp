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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETAUTHMINIPROGRAMAPPLISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETAUTHMINIPROGRAMAPPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/AuthMiniProgramAppInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetAuthMiniProgramAppList返回参数结构体
                */
                class GetAuthMiniProgramAppListResponse : public AbstractModel
                {
                public:
                    GetAuthMiniProgramAppListResponse();
                    ~GetAuthMiniProgramAppListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取小程序列表
                     * @return MiniProgramList 小程序列表
                     * 
                     */
                    std::vector<AuthMiniProgramAppInfo> GetMiniProgramList() const;

                    /**
                     * 判断参数 MiniProgramList 是否已赋值
                     * @return MiniProgramList 是否已赋值
                     * 
                     */
                    bool MiniProgramListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 小程序列表
                     */
                    std::vector<AuthMiniProgramAppInfo> m_miniProgramList;
                    bool m_miniProgramListHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETAUTHMINIPROGRAMAPPLISTRESPONSE_H_

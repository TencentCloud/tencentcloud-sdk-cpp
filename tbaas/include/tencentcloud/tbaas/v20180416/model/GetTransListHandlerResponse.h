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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSLISTHANDLERRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSLISTHANDLERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/BcosTransInfo.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetTransListHandler返回参数结构体
                */
                class GetTransListHandlerResponse : public AbstractModel
                {
                public:
                    GetTransListHandlerResponse();
                    ~GetTransListHandlerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取当前群组编号
                     * @return GroupPk 当前群组编号
                     */
                    std::string GetGroupPk() const;

                    /**
                     * 判断参数 GroupPk 是否已赋值
                     * @return GroupPk 是否已赋值
                     */
                    bool GroupPkHasBeenSet() const;

                    /**
                     * 获取返回数据列表
                     * @return List 返回数据列表
                     */
                    std::vector<BcosTransInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 当前群组编号
                     */
                    std::string m_groupPk;
                    bool m_groupPkHasBeenSet;

                    /**
                     * 返回数据列表
                     */
                    std::vector<BcosTransInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSLISTHANDLERRESPONSE_H_

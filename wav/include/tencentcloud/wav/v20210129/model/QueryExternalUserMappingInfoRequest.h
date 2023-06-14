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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALUSERMAPPINGINFOREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALUSERMAPPINGINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryExternalUserMappingInfo请求参数结构体
                */
                class QueryExternalUserMappingInfoRequest : public AbstractModel
                {
                public:
                    QueryExternalUserMappingInfoRequest();
                    ~QueryExternalUserMappingInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业主体对应的外部联系人id列表，列表长度限制最大为50。
                     * @return CorpExternalUserIdList 企业主体对应的外部联系人id列表，列表长度限制最大为50。
                     * 
                     */
                    std::vector<std::string> GetCorpExternalUserIdList() const;

                    /**
                     * 设置企业主体对应的外部联系人id列表，列表长度限制最大为50。
                     * @param _corpExternalUserIdList 企业主体对应的外部联系人id列表，列表长度限制最大为50。
                     * 
                     */
                    void SetCorpExternalUserIdList(const std::vector<std::string>& _corpExternalUserIdList);

                    /**
                     * 判断参数 CorpExternalUserIdList 是否已赋值
                     * @return CorpExternalUserIdList 是否已赋值
                     * 
                     */
                    bool CorpExternalUserIdListHasBeenSet() const;

                private:

                    /**
                     * 企业主体对应的外部联系人id列表，列表长度限制最大为50。
                     */
                    std::vector<std::string> m_corpExternalUserIdList;
                    bool m_corpExternalUserIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALUSERMAPPINGINFOREQUEST_H_

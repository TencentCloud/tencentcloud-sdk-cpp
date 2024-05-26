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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLPKGLISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLPKGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetTWeCallPkgList请求参数结构体
                */
                class GetTWeCallPkgListRequest : public AbstractModel
                {
                public:
                    GetTWeCallPkgListRequest();
                    ~GetTWeCallPkgListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取appId
                     * @return MiniProgramAppId appId
                     * 
                     */
                    std::string GetMiniProgramAppId() const;

                    /**
                     * 设置appId
                     * @param _miniProgramAppId appId
                     * 
                     */
                    void SetMiniProgramAppId(const std::string& _miniProgramAppId);

                    /**
                     * 判断参数 MiniProgramAppId 是否已赋值
                     * @return MiniProgramAppId 是否已赋值
                     * 
                     */
                    bool MiniProgramAppIdHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return PkgType 类型
                     * 
                     */
                    std::vector<int64_t> GetPkgType() const;

                    /**
                     * 设置类型
                     * @param _pkgType 类型
                     * 
                     */
                    void SetPkgType(const std::vector<int64_t>& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     * 
                     */
                    bool PkgTypeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页数据大小
                     * @return Limit 每页数据大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数据大小
                     * @param _limit 每页数据大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * appId
                     */
                    std::string m_miniProgramAppId;
                    bool m_miniProgramAppIdHasBeenSet;

                    /**
                     * 类型
                     */
                    std::vector<int64_t> m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数据大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLPKGLISTREQUEST_H_

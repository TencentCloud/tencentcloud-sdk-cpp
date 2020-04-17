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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_CATRETURNDETAIL_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_CATRETURNDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测失败详情
                */
                class CatReturnDetail : public AbstractModel
                {
                public:
                    CatReturnDetail();
                    ~CatReturnDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商名称
                     * @return IspName 运营商名称
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置运营商名称
                     * @param IspName 运营商名称
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取省份全拼
                     * @return Province 省份全拼
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份全拼
                     * @param Province 省份全拼
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取省份中文名称
                     * @return ProvinceName 省份中文名称
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置省份中文名称
                     * @param ProvinceName 省份中文名称
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取Map键值
                     * @return MapKey Map键值
                     */
                    std::string GetMapKey() const;

                    /**
                     * 设置Map键值
                     * @param MapKey Map键值
                     */
                    void SetMapKey(const std::string& _mapKey);

                    /**
                     * 判断参数 MapKey 是否已赋值
                     * @return MapKey 是否已赋值
                     */
                    bool MapKeyHasBeenSet() const;

                    /**
                     * 获取拨测目标的IP
                     * @return ServerIp 拨测目标的IP
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置拨测目标的IP
                     * @param ServerIp 拨测目标的IP
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     */
                    bool ServerIpHasBeenSet() const;

                    /**
                     * 获取拨测失败个数
                     * @return ResultCount 拨测失败个数
                     */
                    uint64_t GetResultCount() const;

                    /**
                     * 设置拨测失败个数
                     * @param ResultCount 拨测失败个数
                     */
                    void SetResultCount(const uint64_t& _resultCount);

                    /**
                     * 判断参数 ResultCount 是否已赋值
                     * @return ResultCount 是否已赋值
                     */
                    bool ResultCountHasBeenSet() const;

                    /**
                     * 获取拨测失败返回码
                     * @return ResultCode 拨测失败返回码
                     */
                    uint64_t GetResultCode() const;

                    /**
                     * 设置拨测失败返回码
                     * @param ResultCode 拨测失败返回码
                     */
                    void SetResultCode(const uint64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取拨测失败原因描述
                     * @return ErrorReason 拨测失败原因描述
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置拨测失败原因描述
                     * @param ErrorReason 拨测失败原因描述
                     */
                    void SetErrorReason(const std::string& _errorReason);

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     */
                    bool ErrorReasonHasBeenSet() const;

                private:

                    /**
                     * 运营商名称
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 省份全拼
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 省份中文名称
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * Map键值
                     */
                    std::string m_mapKey;
                    bool m_mapKeyHasBeenSet;

                    /**
                     * 拨测目标的IP
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                    /**
                     * 拨测失败个数
                     */
                    uint64_t m_resultCount;
                    bool m_resultCountHasBeenSet;

                    /**
                     * 拨测失败返回码
                     */
                    uint64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 拨测失败原因描述
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_CATRETURNDETAIL_H_

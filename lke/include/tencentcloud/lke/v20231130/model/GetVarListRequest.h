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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETVARLISTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETVARLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetVarList请求参数结构体
                */
                class GetVarListRequest : public AbstractModel
                {
                public:
                    GetVarListRequest();
                    ~GetVarListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取变量ID数组
                     * @return VarIds 变量ID数组
                     * 
                     */
                    std::vector<std::string> GetVarIds() const;

                    /**
                     * 设置变量ID数组
                     * @param _varIds 变量ID数组
                     * 
                     */
                    void SetVarIds(const std::vector<std::string>& _varIds);

                    /**
                     * 判断参数 VarIds 是否已赋值
                     * @return VarIds 是否已赋值
                     * 
                     */
                    bool VarIdsHasBeenSet() const;

                    /**
                     * 获取按变量名称关键词搜索
                     * @return Keyword 按变量名称关键词搜索
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置按变量名称关键词搜索
                     * @param _keyword 按变量名称关键词搜索
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取起始偏移量（默认0）
                     * @return Offset 起始偏移量（默认0）
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始偏移量（默认0）
                     * @param _offset 起始偏移量（默认0）
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限定数量（默认15）
                     * @return Limit 限定数量（默认15）
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限定数量（默认15）
                     * @param _limit 限定数量（默认15）
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)
                     * @return VarType 按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)
                     * 
                     */
                    std::string GetVarType() const;

                    /**
                     * 设置按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)
                     * @param _varType 按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)
                     * 
                     */
                    void SetVarType(const std::string& _varType);

                    /**
                     * 判断参数 VarType 是否已赋值
                     * @return VarType 是否已赋值
                     * 
                     */
                    bool VarTypeHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 变量ID数组
                     */
                    std::vector<std::string> m_varIds;
                    bool m_varIdsHasBeenSet;

                    /**
                     * 按变量名称关键词搜索
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 起始偏移量（默认0）
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限定数量（默认15）
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)
                     */
                    std::string m_varType;
                    bool m_varTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETVARLISTREQUEST_H_

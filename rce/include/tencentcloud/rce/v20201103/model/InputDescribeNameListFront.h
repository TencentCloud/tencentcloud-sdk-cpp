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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBENAMELISTFRONT_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBENAMELISTFRONT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 查询黑白名单入参
                */
                class InputDescribeNameListFront : public AbstractModel
                {
                public:
                    InputDescribeNameListFront();
                    ~InputDescribeNameListFront() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前页数
                     * @return PageNumber 当前页数
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页数
                     * @param _pageNumber 当前页数
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示条数
                     * @return PageSize 每页显示条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页显示条数
                     * @param _pageSize 每页显示条数
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取名单类型 [1 黑名单 2 白名单]
                     * @return ListType 名单类型 [1 黑名单 2 白名单]
                     * 
                     */
                    int64_t GetListType() const;

                    /**
                     * 设置名单类型 [1 黑名单 2 白名单]
                     * @param _listType 名单类型 [1 黑名单 2 白名单]
                     * 
                     */
                    void SetListType(const int64_t& _listType);

                    /**
                     * 判断参数 ListType 是否已赋值
                     * @return ListType 是否已赋值
                     * 
                     */
                    bool ListTypeHasBeenSet() const;

                    /**
                     * 获取数据类型[1 手机号 2 qqOpenId 3 wechatOpenId 4 ip 6 idfa 7 imei]
                     * @return DataType 数据类型[1 手机号 2 qqOpenId 3 wechatOpenId 4 ip 6 idfa 7 imei]
                     * 
                     */
                    int64_t GetDataType() const;

                    /**
                     * 设置数据类型[1 手机号 2 qqOpenId 3 wechatOpenId 4 ip 6 idfa 7 imei]
                     * @param _dataType 数据类型[1 手机号 2 qqOpenId 3 wechatOpenId 4 ip 6 idfa 7 imei]
                     * 
                     */
                    void SetDataType(const int64_t& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取关键字，按照名单名称搜索
                     * @return KeyWord 关键字，按照名单名称搜索
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置关键字，按照名单名称搜索
                     * @param _keyWord 关键字，按照名单名称搜索
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取记录状态[1 启用 2 停用]
                     * @return Status 记录状态[1 启用 2 停用]
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置记录状态[1 启用 2 停用]
                     * @param _status 记录状态[1 启用 2 停用]
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 当前页数
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 名单类型 [1 黑名单 2 白名单]
                     */
                    int64_t m_listType;
                    bool m_listTypeHasBeenSet;

                    /**
                     * 数据类型[1 手机号 2 qqOpenId 3 wechatOpenId 4 ip 6 idfa 7 imei]
                     */
                    int64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 关键字，按照名单名称搜索
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 记录状态[1 启用 2 停用]
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBENAMELISTFRONT_H_
